@class NSUUID, NSArray;

@interface _LTLanguageStatus : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long taskHint;
@property (readonly, nonatomic) BOOL useDedicatedMachPort;
@property (readonly, nonatomic) id /* block */ observations;
@property (readonly, copy, nonatomic) NSArray *cachedStatus;

- (void)_start;
- (void)dealloc;
- (void)cancel;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTaskHint:(long long)a0 useDedicatedMachPort:(BOOL)a1 observations:(id /* block */)a2;
- (id)initWithObservationType:(unsigned long long)a0 useDedicatedMachPort:(BOOL)a1 observations:(id /* block */)a2;

@end
