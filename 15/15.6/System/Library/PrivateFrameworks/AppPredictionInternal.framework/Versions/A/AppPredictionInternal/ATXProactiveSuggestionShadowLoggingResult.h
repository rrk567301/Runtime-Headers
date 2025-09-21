@class ATXClientModelCacheUpdate, ATXPredictionContext, NSDate;
@protocol BMStoreData;

@interface ATXProactiveSuggestionShadowLoggingResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> shadowEvent;
@property (readonly, nonatomic) NSDate *shadowEventDate;
@property (readonly, nonatomic) ATXClientModelCacheUpdate *clientModelCacheUpdate;
@property (readonly, nonatomic) ATXPredictionContext *context;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShadowEvent:(id)a0 shadowEventDate:(id)a1 clientModelCacheUpdate:(id)a2 context:(id)a3;
- (char)isEqualToATXProactiveSuggestionShadowLoggingResult:(id)a0;

@end
