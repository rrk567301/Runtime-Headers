@class NSURL, MKMapItem, SFSearchResult, WBSParsecImageRepresentation, WBSParsecActionButton, NSString, WBSQuerySuggestion, WBSParsecSportsScoreSummary, NSArray, WBSParsecSearchMapsResultFeedbackSender, WBSParsecAuxiliaryInfo, WBSParsecSearchSportsAttributionExtraCompletionItem, NSNumber;
@protocol WBSParsecSearchSession;

@interface WBSSFSearchResultAdapter : NSObject <WBSParsecSearchResult, WBSParsecSearchGenericResult, WBSParsecSearchMapsResult, WBSParsecSearchSimpleResult, WBSParsecSearchSportsResult> {
    WBSParsecSportsScoreSummary *_sportsScoreSummary;
}

@property (readonly, nonatomic) SFSearchResult *searchResult;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *feedbackIdentifier;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) NSString *completion;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) NSURL *appPunchoutURL;
@property (readonly, copy, nonatomic) NSString *mediaKind;
@property (readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property (readonly, nonatomic) WBSParsecActionButton *actionButton;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, copy, nonatomic) NSString *alternateSectionHeader;
@property (readonly, nonatomic) long long placementHint;
@property (readonly, nonatomic) unsigned long long displayOptions;
@property (readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property (readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property (readonly, nonatomic) NSNumber *titleMaximumLines;
@property (readonly, copy, nonatomic) NSArray *descriptionRichTexts;
@property (readonly, copy, nonatomic) NSString *footnote;
@property (readonly, copy, nonatomic) NSString *secondaryTitle;
@property (readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (readonly, nonatomic) WBSParsecImageRepresentation *thumbnail;
@property (retain, nonatomic) id<WBSParsecSearchSession> parsecSearchSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (readonly, nonatomic) NSNumber *titleMaximumNumberOfLines;
@property (readonly, nonatomic) NSString *descriptionLeadInText;
@property (readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines;
@property (readonly, nonatomic) BOOL descriptionTextCanWrap;
@property (readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle;
@property (readonly, nonatomic) unsigned long long descriptionAlignment;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSArray *individualScores;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;

- (void).cxx_destruct;
- (BOOL)canBecomeTopHitForQuery:(id)a0;
- (id)completionIconWithSession:(id)a0;
- (id)iconWithSession:(id)a0;
- (id)_sportsScoreSummary;
- (id)initWithSFSearchResult:(id)a0;
- (id)thumbnailWithSession:(id)a0;
- (id)titleGlyphWithSession:(id)a0;

@end
