@class WBSQuerySuggestion, NSString, SFSearchResult, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecSearchResult : NSObject <WBSCompletionListItem> {
    SFSearchResult *_sfSearchResult;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *feedbackIdentifier;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *sectionHeader;
@property (readonly, copy, nonatomic) NSString *completion;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) NSURL *appPunchoutURL;
@property (readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property (readonly, copy, nonatomic) NSString *alternateSectionHeader;
@property (readonly, nonatomic) long long placementHint;
@property (readonly, nonatomic) unsigned long long displayOptions;
@property (readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property (readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, copy, nonatomic) NSString *stringForType;
@property (readonly, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)typeForSFSearchResult:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)completionIconWithSession:(id)a0;
- (id)iconWithSession:(id)a0;
- (BOOL)shouldAutocompleteQuery:(id)a0;
- (id)initWithSFSearchResult:(id)a0;
- (BOOL)isPredictionFromServerMatchingUserTypedQuery:(id)a0;

@end
