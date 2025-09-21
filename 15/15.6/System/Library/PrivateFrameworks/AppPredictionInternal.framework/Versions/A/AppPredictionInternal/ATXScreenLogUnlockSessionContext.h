@class ATXHomeScreenLogUnlockSessionManager;

@interface ATXScreenLogUnlockSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) ATXHomeScreenLogUnlockSessionManager *unlockSessionManager;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUnlockSessionManager:(id)a0;
- (char)isEqualToATXScreenLogUnlockSessionContext:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;

@end
