@class NSString, NSArray, WBSParsecSearchMapsResultFeedbackSender, WBSParsecImageRepresentation;
@protocol WBSParsecSearchSession;

@interface WBSParsecSearchSimpleResult : WBSParsecLegacySearchResult <WBSParsecSearchSimpleResult> {
    WBSParsecImageRepresentation *_titleGlyph;
    NSArray *_moreIconRepresentations;
}

@property (readonly, nonatomic) NSString *footnote;
@property (readonly, nonatomic) unsigned long long descriptionAlignment;
@property (retain, nonatomic) id<WBSParsecSearchSession> parsecSearchSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)engagementDestination;

@end
