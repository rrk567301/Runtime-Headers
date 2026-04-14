@class UARPComponentTag;

@interface UARPTatsuFTABProperties : NSObject

@property (readonly) UARPComponentTag *componentTag;
@property (readonly) unsigned int infoProperty;
@property (readonly) id propertyValue;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFTABPropertyDictionary:(id)a0;

@end
