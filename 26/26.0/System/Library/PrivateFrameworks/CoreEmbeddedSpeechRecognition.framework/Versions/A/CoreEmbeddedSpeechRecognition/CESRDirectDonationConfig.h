@class NSDictionary;

@interface CESRDirectDonationConfig : NSObject

@property (readonly, nonatomic) NSDictionary *fieldTypeToMapping;

+ (id)_parseFieldTypeMappings:(id)a0;

- (void).cxx_destruct;
- (BOOL)_parseJsonObject:(id)a0;
- (void)_setFieldTypeToMapping:(id)a0;
- (id)initWithJsonObject:(id)a0;
- (id)mappingForFieldTypeName:(id)a0;

@end
