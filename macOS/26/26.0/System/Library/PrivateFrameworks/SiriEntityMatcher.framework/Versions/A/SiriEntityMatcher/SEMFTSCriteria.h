@class NSArray, NSSet;

@interface SEMFTSCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) unsigned char searchMode;
@property (readonly, nonatomic) NSSet *originAppIdFilters;
@property (readonly, nonatomic) NSSet *fieldTypeFilters;

+ (id)builderWithLikeTerms:(id)a0;
+ (id)builderWithMatchTerm:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_commandCriterionFromFieldTypeFilters;
- (id)_commandCriterionFromOriginAppFilters;
- (id)commandCriteriaFromFilters;
- (id)commandCriteriaFromSearchTerms;
- (id)initWithSearchTerms:(id)a0 searchMode:(unsigned char)a1 originAppIdFilters:(id)a2 fieldTypeFilters:(id)a3;
- (BOOL)isEqualToSearchCriteria:(id)a0;

@end
