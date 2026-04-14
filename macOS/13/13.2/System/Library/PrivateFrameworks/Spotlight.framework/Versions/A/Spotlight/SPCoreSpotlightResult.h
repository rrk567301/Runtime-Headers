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
- (void)setScore:(unsigned __int128)a0;
- (id)contentDescription;
- (id)completion;
- (void)markAsUsed;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (id)documentIdentifier;
- (BOOL)isFile;
- (BOOL)isBoundEmailAttachment;
- (id)subjectForEmailAttachment;
- (id)section_header;
- (id)relatedIdentifier;
- (id)relatedAppIdentifier;
- (BOOL)isLocalApplicationResult;
- (id)pathForApplicationToOpen;
- (id)initWithAttributeSet:(id)a0 fetchedAttributes:(id)a1 ranker:(id)a2 queryString:(id)a3;
- (id)quickLookItemForQueryString:(id)a0;

@end
