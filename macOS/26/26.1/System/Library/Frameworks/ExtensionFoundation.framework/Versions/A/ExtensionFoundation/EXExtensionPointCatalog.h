@class NSDictionary;

@interface EXExtensionPointCatalog : NSObject

@property (readonly) NSDictionary *extensionPointByIdentifierPlatform;

- (id)extensionPointForIdentifier:(id)a0;
- (id)initWithEnumerator:(id)a0;
- (id)extensionPointForIdentifier:(id)a0 platform:(unsigned int)a1;
- (void).cxx_destruct;
- (id)init;

@end
