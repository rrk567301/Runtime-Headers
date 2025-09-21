@class ATXStackRotationSessionManager, NSMutableArray;

@interface ATXStackSystemSuggestTrackingContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ATXStackRotationSessionManager *sessionManager;
@property (readonly, nonatomic) NSMutableArray *systemSuggestBlendingCaches;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)blendingCacheWithUUID:(id)a0;
- (id)initWithRotationSessionManager:(id)a0 systemSuggestBlendingCaches:(id)a1;
- (char)isEqualToATXStackSystemSuggestTrackingContext:(id)a0;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;

@end
