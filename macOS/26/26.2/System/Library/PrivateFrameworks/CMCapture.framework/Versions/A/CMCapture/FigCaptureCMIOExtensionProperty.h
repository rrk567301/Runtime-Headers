@class NSString;

@interface FigCaptureCMIOExtensionProperty : NSObject

@property (readonly, retain) NSString *propertyName;
@property (retain) id propertyValue;
@property (readonly) BOOL readonly;
@property (retain) NSString *propertyAliasName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 defaultValue:(id)a1 readonly:(BOOL)a2;
- (void)updatePropertyValueWithoutKVONotification:(id)a0;

@end
