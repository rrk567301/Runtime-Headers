@class MEMessageCategorizationResultMetadata;

@interface MEMessageCategorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long categoryType;
@property (nonatomic) unsigned long long subcategory;
@property (retain, nonatomic) MEMessageCategorizationResultMetadata *metadata;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCategoryType:(unsigned long long)a0 subCategoryType:(unsigned long long)a1 metadata:(id)a2;

@end
