@class NSMutableDictionary, _GCHIDEventSubject;

@interface _GCHIDEventSubjectAuditor : NSObject {
    _GCHIDEventSubject *_subject;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_serviceAuditors;
    _Atomic unsigned long long _pausedForReasonsChangeCount;
    unsigned long long _state;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
