@class NSData, NSString, CPLSocialGroupPersonList;

@interface CPLSocialGroupChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *personsData;
@property (nonatomic) short verifiedType;
@property (retain, nonatomic) NSString *customTitle;
@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) NSString *keyAssetIdentifier;
@property (retain, nonatomic) CPLSocialGroupPersonList *persons;

+ (char)supportsDeletion;
+ (id)_createTestSocialGroupWithPersons:(id)a0;
+ (char)cplShouldIgnorePropertyForCoding:(id)a0;
+ (char)cplShouldIgnorePropertyForEquality:(id)a0;
+ (id /* block */)equalityBlockForDirection:(unsigned long long)a0;
+ (Class)relatedRecordClass;
+ (char)relatedRelationshipIsWeak;
+ (char)supportsDirectDeletion;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (void)setPersonData:(id)a0;
- (id)keyAssetScopedIdentifier;
- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (void)setKeyAssetScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end
