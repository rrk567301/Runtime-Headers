@class NSString, UARPComponentTag;

@interface UARPTatsuManifestProperties : NSObject

@property (readonly) NSString *keyName;
@property (readonly) UARPComponentTag *componentTag;
@property (readonly) unsigned int infoProperty;
@property (readonly) id propertyValue;

- (void).cxx_destruct;
- (id)description;
- (id)initWithManifestPropertyDictionary:(id)a0;
- (void)updateDefaultPropertyValue:(id)a0;

@end
