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
- (id)URL;
- (id)uniqueIdentifier;
- (id)bundleID;
- (id)url;
- (id)filePath;
- (id)category;
- (unsigned __int128)score;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (id)previewItemURL;
- (id)lastUsedDate;
- (id)contentDescription;
- (void)setScore:(unsigned __int128)a0;
- (id)completion;
- (id)documentIdentifier;
- (void)markAsUsed;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (BOOL)isFile;
- (id)pathForApplicationToOpen;
- (BOOL)isBoundEmailAttachment;
- (id)subjectForEmailAttachment;
- (id)quickLookItemForQueryString:(id)a0;
- (id)relatedIdentifier;
- (id)section_header;
- (BOOL)isLocalApplicationResult;
- (id)initWithAttributeSet:(id)a0 fetchedAttributes:(id)a1 ranker:(id)a2 queryString:(id)a3;

@end
