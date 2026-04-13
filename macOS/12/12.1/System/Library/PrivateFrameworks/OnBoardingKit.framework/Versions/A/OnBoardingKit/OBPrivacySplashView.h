@class NSString, NSImage, NSStackView, NSMutableArray;

@interface OBPrivacySplashView : NSStackView

@property (retain) NSImage *icon;
@property (retain) NSString *mainTitle;
@property double contentWidth;
@property (retain) NSStackView *contentStack;
@property (retain) NSMutableArray *buttons;
@property (retain) NSString *displayLanguage;
@property (nonatomic) BOOL isCombined;

- (void).cxx_destruct;
- (id)button;
- (void)addIcon:(id)a0;
- (void)addLabel:(id)a0;
- (void)removeButton;
- (id)initWithContentList:(id)a0;
- (void)addPrivacyGatewayLink;
- (void)addButtonWithTitle:(id)a0 action:(SEL)a1 target:(id)a2;
- (void)removeAllTitlesAndContent;
- (void)addTitle:(id)a0 contentList:(id)a1;
- (void)addContentList:(id)a0;
- (void)disclosureClicked:(id)a0;
- (id)boxSeparator;
- (void)clickDisclosure:(id)a0;
- (id)attributedTitleStringWithString:(id)a0;
- (id)stackViewForContentList:(id)a0;
- (void)addLabel:(id)a0 toStackView:(id)a1 centered:(BOOL)a2;
- (id)attributedContentStringWithString:(id)a0 centered:(BOOL)a1;
- (void)addButtonWithTitle:(id)a0 action:(SEL)a1 target:(id)a2 toStackView:(id)a3;
- (void)addLabel:(id)a0 toStackView:(id)a1;
- (id)attributedMainTitleStringWithString:(id)a0;
- (id)attributedContentStringWithString:(id)a0;

@end
