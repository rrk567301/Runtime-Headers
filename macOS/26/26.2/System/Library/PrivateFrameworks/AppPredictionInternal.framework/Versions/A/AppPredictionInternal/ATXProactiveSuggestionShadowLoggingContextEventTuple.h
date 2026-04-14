@class BMStoreEvent, ATXProactiveSuggestionShadowLoggingContext;

@interface ATXProactiveSuggestionShadowLoggingContextEventTuple : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BMStoreEvent *event;
@property (readonly, nonatomic) ATXProactiveSuggestionShadowLoggingContext *shadowLoggingContext;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEvent:(id)a0 shadowLoggingContext:(id)a1;
- (BOOL)isEqualToATXProactiveSuggestionShadowLoggingContextEventTuple:(id)a0;

@end
