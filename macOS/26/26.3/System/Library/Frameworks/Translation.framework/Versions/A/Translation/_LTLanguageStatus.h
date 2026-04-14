@class NSUUID, NSArray;

@interface _LTLanguageStatus : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long taskHint;
@property (readonly, nonatomic) BOOL useDedicatedMachPort;
@property (readonly, nonatomic) id /* block */ observations;
@property (readonly, copy, nonatomic) NSArray *cachedStatus;

- (void)cancel;
- (id)description;
- (void)_start;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTaskHint:(long long)a0 useDedicatedMachPort:(BOOL)a1 observations:(id /* block */)a2;
- (id)initWithObservationType:(unsigned long long)a0 useDedicatedMachPort:(BOOL)a1 observations:(id /* block */)a2;

@end
