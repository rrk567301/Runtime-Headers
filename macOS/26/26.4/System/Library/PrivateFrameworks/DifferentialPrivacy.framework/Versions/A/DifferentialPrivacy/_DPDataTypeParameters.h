@class _DPPrivacyBudget;

@interface _DPDataTypeParameters : NSObject

@property (readonly, nonatomic) float localPrivacyBudget;
@property (readonly, nonatomic) _DPPrivacyBudget *budget;

+ (id)parametersFromFile:(id)a0;
+ (id)allDataTypeNames;
+ (id)dataTypeParametersFromDictionary:(id)a0;
+ (id)initParametersForDataType:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
