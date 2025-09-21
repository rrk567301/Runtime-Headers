@class NSString, NSDictionary;

@interface STRecoveryEmailMismatchCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) char isRecoveryEmailMismatched;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
