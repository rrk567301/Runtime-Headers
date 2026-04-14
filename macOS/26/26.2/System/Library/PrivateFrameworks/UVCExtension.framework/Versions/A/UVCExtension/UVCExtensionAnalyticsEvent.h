@class NSString, NSDictionary;

@interface UVCExtensionAnalyticsEvent : NSObject

@property (readonly) NSString *name;
@property (readonly) NSDictionary *attributes;

- (id)currentValue;
- (void).cxx_destruct;
- (void)setCurrentValue:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 attributes:(id)a1;

@end
