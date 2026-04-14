@class NSMutableArray;

@interface ICAVContentKeySessionReusePool : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *reusables;
@property (nonatomic) long long currentBatchNumber;
@property (nonatomic) long long maxUseCount;

+ (id)defaultPool;

- (id)init;
- (void).cxx_destruct;
- (void)mediaServicesWereLost;
- (void)mediaServicesWereReset;
- (void)invalidateAllReusables;
- (id)reusableWithIdentifier:(id)a0 nonreusableTokens:(id)a1;
- (void)reuse:(id)a0;
- (void)didReceiveFairPlayError:(id)a0;

@end
