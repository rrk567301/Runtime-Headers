@class NSUUID, NSArray, _LTLanguageStatusMulticaster;

@interface _LTLanguageStatus : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _LTLanguageStatusMulticaster *_multicaster;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long taskHint;
@property (readonly, nonatomic) long long engineType;
@property (readonly, nonatomic) BOOL useDedicatedMachPort;
@property (readonly, nonatomic) id /* block */ observations;
@property (readonly, copy, nonatomic) NSArray *cachedStatus;

- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)_start;
- (id)initWithTaskHint:(long long)a0 useDedicatedMachPort:(BOOL)a1 observations:(id /* block */)a2;
- (id)_initWithTaskHint:(long long)a0 engineType:(long long)a1 useDedicatedMachPort:(BOOL)a2 multicaster:(id)a3 observations:(id /* block */)a4;
- (id)initWithObservationType:(unsigned long long)a0 useDedicatedMachPort:(BOOL)a1 observations:(id /* block */)a2;
- (id)initWithTaskHint:(long long)a0 engineType:(long long)a1 useDedicatedMachPort:(BOOL)a2 observations:(id /* block */)a3;

@end
