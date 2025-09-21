@class NSString, NSDictionary, NSData, NSDate;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *smartQueryParamsData;
@property (nonatomic) unsigned long long albumType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (nonatomic) unsigned long long albumSortType;
@property (nonatomic) char albumSortAscending;
@property (copy, nonatomic) NSDictionary *smartQueryParams;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSData *projectPreviewImageData;
@property (copy, nonatomic) NSString *importedByBundleIdentifier;
@property (copy, nonatomic) NSDate *userModificationDate;

+ (char)cplShouldIgnorePropertyForCoding:(id)a0;
+ (char)cplShouldIgnorePropertyForEquality:(id)a0;
+ (Class)relatedRecordClass;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (id)parentScopedIdentifier;
- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (void)setParentScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (char)validateRecordForTracker:(id)a0;

@end
