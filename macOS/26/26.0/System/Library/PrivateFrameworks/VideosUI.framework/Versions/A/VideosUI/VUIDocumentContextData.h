@class NSDictionary, VUIExtensionContextData;

@interface VUIDocumentContextData : NSObject

@property (copy, nonatomic) NSDictionary *contextDataDict;
@property (copy, nonatomic) VUIExtensionContextData *extensionContextData;

- (id)initWithDictionary:(id)a0;
- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
