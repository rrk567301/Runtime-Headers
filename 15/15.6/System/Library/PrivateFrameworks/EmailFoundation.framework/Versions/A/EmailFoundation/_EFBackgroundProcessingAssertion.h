@class NSArray, NSDate;

@interface _EFBackgroundProcessingAssertion : NSObject {
    NSDate *_currentExpiry;
    unsigned long long _count;
    unsigned long long _resetCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_protectedFiles;
}

- (void).cxx_destruct;
- (void)_checkIfExpired;
- (char)_iterateFilesPerformingAction:(id /* block */)a0 error:(id *)a1;
- (char)_releaseAssertionWithError:(id *)a0;
- (char)_takeAssertionForDuration:(double)a0 error:(id *)a1;

@end
