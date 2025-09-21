@class NSData, NSString, NSDictionary;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *contactDescriptor;
@property (copy, nonatomic) NSString *fullName;
@property (nonatomic) long long personType;
@property (nonatomic) long long manualSortOrder;
@property (nonatomic) long long assetSortOrder;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long verifiedType;
@property (nonatomic) short detectionType;
@property (copy, nonatomic) NSString *mergeTargetPersonIdentifier;

+ (char)supportsDeletion;
+ (char)serverSupportsAssetSortOrder;
+ (char)serverSupportsDetectionType;
+ (char)serverSupportsGraphPeopleHome;
+ (char)serverSupportsMergeTargetRef;
+ (char)cplShouldIgnorePropertyForCoding:(id)a0;
+ (char)cplShouldIgnorePropertyForEquality:(id)a0;
+ (Class)relatedRecordClass;
+ (char)supportsDirectDeletion;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (id)mergeTargetPersonScopedIdentifier;
- (void)setMergeTargetPersonScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (char)validateRecordForTracker:(id)a0;

@end
