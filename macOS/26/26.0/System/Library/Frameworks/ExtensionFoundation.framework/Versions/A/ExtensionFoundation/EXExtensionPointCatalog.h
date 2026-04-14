@class NSDictionary;

@interface EXExtensionPointCatalog : NSObject

@property (readonly) NSDictionary *extensionPointByIdentifierPlatform;

- (id)initWithEnumerator:(id)a0;
- (id)init;
- (id)extensionPointForIdentifier:(id)a0 platform:(unsigned int)a1;
- (void).cxx_destruct;
- (id)extensionPointForIdentifier:(id)a0;

@end
