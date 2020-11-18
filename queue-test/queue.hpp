#ifndef QUEUE__HPP
#define QUEUE__HPP

#include <cstdio>
#include <vector>

template <typename E>
class Queue {
    public:
        Queue();
        void Enqueue(const E& element) {
            _queue.push_back(element);
        };
        E Dequeue() {
            E _e = _queue[0];
            _queue.erase(_queue.begin);
            return _e;
        };
        std::size_t size() const {
            _queue.size();
        };

    private:
        std::vector<E> _queue;
}


#endif // QUEUE__HPP
