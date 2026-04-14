@class ATXHomeScreenLogUnlockSessionManager;

@interface ATXScreenLogUnlockSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXHomeScreenLogUnlockSessionManager *unlockSessionManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUnlockSessionManager:(id)a0;
- (BOOL)isEqualToATXScreenLogUnlockSessionContext:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;

@end
