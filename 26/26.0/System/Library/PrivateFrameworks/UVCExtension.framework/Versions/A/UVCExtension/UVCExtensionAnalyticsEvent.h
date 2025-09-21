@class NSString, NSDictionary;

@interface UVCExtensionAnalyticsEvent : NSObject

@property (readonly) NSString *name;
@property (readonly) NSDictionary *attributes;

- (id)currentValue;
- (id)description;
- (void)setCurrentValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 attributes:(id)a1;

@end
