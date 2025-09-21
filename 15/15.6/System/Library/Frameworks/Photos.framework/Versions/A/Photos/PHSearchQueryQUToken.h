@class NSDictionary, NSString, NSIndexSet;

@interface PHSearchQueryQUToken : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long ambiguityType;
@property (readonly, nonatomic) NSIndexSet *entityCategoryTypes;

+ (char)_isSupportedEntityCategoryType:(unsigned long long)a0;
+ (id)_supportedEntityCategoryTypes;
+ (id)entityCategoryTypeKeyForEntityTypeCategory:(unsigned long long)a0;
+ (char)isGenericLocation:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (char)hasMemoryGenAnnotation;
- (id)initWithText:(id)a0 entityCategoryTypes:(id)a1 metadata:(id)a2;
- (id)metadataForCategoryType:(unsigned long long)a0;

@end
