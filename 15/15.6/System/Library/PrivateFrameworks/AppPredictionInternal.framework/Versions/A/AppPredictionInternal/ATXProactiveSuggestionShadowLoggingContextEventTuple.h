@class BMStoreEvent, ATXProactiveSuggestionShadowLoggingContext;

@interface ATXProactiveSuggestionShadowLoggingContextEventTuple : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) BMStoreEvent *event;
@property (readonly, nonatomic) ATXProactiveSuggestionShadowLoggingContext *shadowLoggingContext;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(id)a0 shadowLoggingContext:(id)a1;
- (char)isEqualToATXProactiveSuggestionShadowLoggingContextEventTuple:(id)a0;

@end
