@class NSDictionary, ATXPredictionContext, NSMutableDictionary;

@interface ATXProactiveSuggestionShadowLoggingContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_clientModelCacheUpdates;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdates;
@property (readonly, nonatomic) ATXPredictionContext *context;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithContext:(id)a0;
- (id)initWithClientModelCacheUpdates:(id)a0 context:(id)a1;
- (char)isEqualToATXProactiveSuggestionShadowLoggingContext:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;

@end
