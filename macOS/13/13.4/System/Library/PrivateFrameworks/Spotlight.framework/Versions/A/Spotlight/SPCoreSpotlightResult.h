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
@property (readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)url;
- (id)URL;
- (id)bundleID;
- (id)uniqueIdentifier;
- (id)filePath;
- (id)category;
- (unsigned __int128)score;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (id)previewItemURL;
- (id)lastUsedDate;
- (id)completion;
- (id)contentDescription;
- (void)setScore:(unsigned __int128)a0;
- (id)initWithResult:(id)a0;
- (id)documentIdentifier;
- (void)markAsUsed;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (BOOL)isFile;
- (id)initWithAttributeSet:(id)a0 fetchedAttributes:(id)a1 ranker:(id)a2 queryString:(id)a3;
- (id)initWithSearchResult:(id)a0;
- (BOOL)isBoundEmailAttachment;
- (BOOL)isCoreSpotlightResult;
- (BOOL)isLocalApplicationResult;
- (id)pathForApplicationToOpen;
- (id)quickLookItemForQueryString:(id)a0;
- (id)relatedAppIdentifier;
- (id)relatedIdentifier;
- (id)section_header;
- (id)subjectForEmailAttachment;

@end
