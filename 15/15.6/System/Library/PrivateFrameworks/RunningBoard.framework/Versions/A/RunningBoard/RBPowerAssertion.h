@class NSString, NSDate;

@interface RBPowerAssertion : NSObject {
    unsigned int _identifier;
    NSDate *_acquisitionDate;
    NSString *_name;
    NSString *_baseName;
    char _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;

@end
