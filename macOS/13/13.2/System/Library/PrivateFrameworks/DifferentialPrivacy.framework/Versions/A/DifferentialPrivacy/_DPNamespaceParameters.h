@class _DPPrivacyBudget, NSArray;

@interface _DPNamespaceParameters : NSObject

@property (readonly, nonatomic) _DPPrivacyBudget *budget;
@property (retain, nonatomic) NSArray *allowedDataTypes;

+ (id)namespaceParametersFromDictionary:(id)a0;
+ (id)initParametersForNamespace:(id)a0;
+ (id)parametersFromFile:(id)a0;
+ (id)allNamespaceNames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
