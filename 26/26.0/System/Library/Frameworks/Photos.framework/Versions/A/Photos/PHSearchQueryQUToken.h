@class NSDictionary, NSString, NSIndexSet;

@interface PHSearchQueryQUToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *metadata;
@property (nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long ambiguityType;
@property (readonly, nonatomic) NSIndexSet *entityCategoryTypes;

+ (BOOL)_isSupportedEntityCategoryType:(unsigned long long)a0;
+ (id)_supportedEntityCategoryTypes;
+ (id)entityCategoryTypeKeyForEntityTypeCategory:(unsigned long long)a0;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMemoryGenAnnotation;
- (id)initWithText:(id)a0 entityCategoryTypes:(id)a1 metadata:(id)a2;
- (id)metadataForCategoryType:(unsigned long long)a0;

@end
