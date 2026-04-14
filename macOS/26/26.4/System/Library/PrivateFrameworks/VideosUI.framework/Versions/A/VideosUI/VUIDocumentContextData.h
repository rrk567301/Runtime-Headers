@class NSDictionary, VUIExtensionContextData;

@interface VUIDocumentContextData : NSObject

@property (copy, nonatomic) NSDictionary *contextDataDict;
@property (copy, nonatomic) VUIExtensionContextData *extensionContextData;
@property (copy, nonatomic) NSDictionary *additionalContextData;

- (id)jsonData;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
