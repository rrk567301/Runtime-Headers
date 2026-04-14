@class NSString, NSImage, OBPrivacyLinkButton, NSArray, NSStackView;

@interface OBPrivacySplashView : NSStackView

@property (retain) NSImage *icon;
@property (retain) NSString *mainTitle;
@property double contentWidth;
@property (retain) OBPrivacyLinkButton *learnMoreButton;
@property (retain) NSStackView *contentStack;
@property (retain) NSArray *privacyFlowGroups;
@property (retain) NSString *displayLanguage;
@property BOOL allowsOpeningSafari;
@property (nonatomic) BOOL isCombined;

- (void).cxx_destruct;
- (void)addIcon:(id)a0;
- (void)addLabel:(id)a0;
- (void)addTitle:(id)a0 contentList:(id)a1;
- (void)addPrivacyFlowGroups:(id)a0;
- (void)disclosureClicked:(id)a0;
- (void)clickDisclosure:(id)a0;
- (id)initWithContentList:(id)a0;
- (id)initWithContentList:(id)a0 allowsOpeningSafari:(BOOL)a1;
- (void)addGenericPrivacyHeading;
- (void)addTitle:(id)a0 contentList:(id)a1 separator:(BOOL)a2;
- (id)stackViewForContentList:(id)a0;
- (id)createTextViewWithContent:(id)a0;
- (id)createTextViewWithAttributedContent:(id)a0;
- (void)addContentList:(id)a0;
- (void)removeAllTitlesAndContent;
- (void)addLabel:(id)a0 toStackView:(id)a1;
- (void)addLabel:(id)a0 toStackView:(id)a1 centered:(BOOL)a2;
- (void)addPrivacyGatewayLink;
- (void)addLearnMoreButtonWithAction:(SEL)a0 target:(id)a1;
- (id)boxSeparator;
- (id)attributedMainTitleStringWithString:(id)a0;
- (id)attributedTitleStringWithString:(id)a0;
- (id)attributedContentStringWithString:(id)a0;
- (id)attributedContentStringWithString:(id)a0 centered:(BOOL)a1;

@end
