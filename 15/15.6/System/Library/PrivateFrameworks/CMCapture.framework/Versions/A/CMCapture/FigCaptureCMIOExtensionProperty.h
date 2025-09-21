@class NSString;

@interface FigCaptureCMIOExtensionProperty : NSObject

@property (readonly, retain) NSString *propertyName;
@property (retain) id propertyValue;
@property (readonly) char readonly;
@property (retain) NSString *propertyAliasName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 defaultValue:(id)a1 readonly:(char)a2;
- (void)updatePropertyValueWithoutKVONotification:(id)a0;

@end
