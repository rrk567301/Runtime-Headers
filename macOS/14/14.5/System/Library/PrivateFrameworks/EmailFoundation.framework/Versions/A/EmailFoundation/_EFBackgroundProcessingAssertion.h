@class NSArray, NSDate;

@interface _EFBackgroundProcessingAssertion : NSObject {
    NSDate *_currentExpiry;
    unsigned long long _count;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_protectedFiles;
}

- (void).cxx_destruct;
- (BOOL)_iterateFilesPerformingAction:(id /* block */)a0 error:(id *)a1;
- (BOOL)_releaseAssertionWithError:(id *)a0;
- (BOOL)_takeAssertionForDuration:(double)a0 error:(id *)a1;

@end
