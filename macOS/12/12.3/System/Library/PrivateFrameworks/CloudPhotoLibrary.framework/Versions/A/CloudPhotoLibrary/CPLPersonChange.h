@class NSData, NSString, NSDictionary;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *contactDescriptor;
@property (copy, nonatomic) NSString *fullName;
@property (nonatomic) long long personType;
@property (nonatomic) long long manualSortOrder;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long verifiedType;
@property (copy, nonatomic) NSString *mergeTargetPersonIdentifier;

+ (BOOL)serverSupportsGraphPeopleHome;
+ (BOOL)serverSupportsMergeTargetRef;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)a0;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)a0;
+ (Class)relatedRecordClass;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (BOOL)supportsDeletion;
- (BOOL)supportsDirectDeletion;
- (void)setRelatedIdentifier:(id)a0;
- (BOOL)validateRecordForTracker:(id)a0;

@end
