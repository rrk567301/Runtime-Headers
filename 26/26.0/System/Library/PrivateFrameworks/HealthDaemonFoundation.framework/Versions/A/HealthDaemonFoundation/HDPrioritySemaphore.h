@class NSString, NSMutableSet, HDPriorityQueue;

@interface HDPrioritySemaphore : NSObject <HDSemaphore> {
    unsigned long long _options;
    NSString *_debugIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_emptyTabCache;
    HDPriorityQueue *_pendingQueue;
    unsigned long long _activeThreadLimit;
    unsigned long long _activeThreadCount;
    BOOL _requireInitialSignal;
    unsigned long long _signpost;
    BOOL _isHighCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)signal;
- (void)wait;
- (unsigned long long)pendingCount;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0 options:(unsigned long long)a1 debugIdentifier:(id)a2;
- (void)requireInitialSignal;
- (void)waitForPendingCount:(unsigned long long)a0;
- (void)waitWithPriority:(long long)a0;

@end
