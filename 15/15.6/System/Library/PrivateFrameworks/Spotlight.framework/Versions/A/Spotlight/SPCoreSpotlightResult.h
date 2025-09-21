@class NSString, NSNumber, CSSearchableItemAttributeSet;

@interface SPCoreSpotlightResult : SFSearchResult_SpotlightExtras <NSPasteboardWriting> {
    unsigned __int128 _score;
    unsigned long long _hashValue;
    NSString *_section_header;
    NSNumber *_groupNumber;
}

@property (retain, nonatomic) NSString *threadId;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSNumber *groupNumber;
@property (nonatomic) char isSearchToolClient;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)attrHasPhotosAlbumMemoryResult:(id)a0 isSearchToolClient:(char)a1;
+ (id)descriptionFromEntityType:(id)a0 displayName:(id)a1;
+ (id)titleStringFromAttrsForAlbumMemory:(id)a0;

- (void).cxx_destruct;
- (id)URL;
- (id)url;
- (id)bundleID;
- (id)uniqueIdentifier;
- (id)filePath;
- (id)category;
- (unsigned __int128)score;
- (id)valueForAttribute:(id)a0;
- (id)contentDescription;
- (id)groupName;
- (id)previewItemURL;
- (id)lastUsedDate;
- (void)setScore:(unsigned __int128)a0;
- (id)initWithResult:(id)a0;
- (id)completion;
- (id)documentIdentifier;
- (char)isFile;
- (void)markAsUsed;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (id)fullAttributeSet;
- (id)initWithAttributeSet:(id)a0 fetchedAttributes:(id)a1 ranker:(id)a2 queryString:(id)a3 isAppEntitySearch:(char)a4 isSearchToolClient:(char)a5;
- (id)initWithAttributeSet:(id)a0 fetchedAttributes:(id)a1 ranker:(id)a2 queryString:(id)a3 isSearchToolClient:(char)a4;
- (char)isBoundEmailAttachment;
- (char)isCoreSpotlightResult;
- (char)isLocalApplicationResult;
- (id)pathForApplicationToOpen;
- (id)quickLookItemForQueryString:(id)a0;
- (id)relatedAppIdentifier;
- (id)relatedIdentifier;
- (id)section_header;
- (id)subjectForEmailAttachment;

@end
