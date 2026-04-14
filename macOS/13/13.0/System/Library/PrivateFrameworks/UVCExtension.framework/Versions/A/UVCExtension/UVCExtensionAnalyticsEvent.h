@class NSString, NSDictionary;

@interface UVCExtensionAnalyticsEvent : NSObject

@property (readonly) NSString *name;
@property (readonly) NSDictionary *attributes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;

@end
