@interface RBCommitObserverArray : NSObject {
    struct vector<RB::refcounted_ptr<RB::CommitMarker::Observer>, 4UL, unsigned long> { unsigned char _p[32]; void *_p; unsigned long long _size; unsigned long long _capacity; } _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
