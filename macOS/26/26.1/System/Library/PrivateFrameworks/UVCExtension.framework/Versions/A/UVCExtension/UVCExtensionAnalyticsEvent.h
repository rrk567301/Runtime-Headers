@class NSString, NSDictionary;

@interface UVCExtensionAnalyticsEvent : NSObject

@property (readonly) NSString *name;
@property (readonly) NSDictionary *attributes;

- (void)setCurrentValue:(id)a0;
- (id)description;
- (id)currentValue;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 attributes:(id)a1;

@end
