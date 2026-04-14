@class NSTextField, CNContact, NSString, ABCardViewStyleProvider;

@interface CNContactSharingEnabledWarningViewController : NSViewController <CNContactCardWidget>

@property (readonly, nonatomic) NSTextField *warningLabel;
@property (readonly, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *warningMessage;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelWithText:(id)a0;
+ (id)lockGlyphAttachmentText;
+ (id)whitespaceText;

- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)paragraphStyle;
- (void)setContact:(id)a0;
- (void).cxx_destruct;
- (id)attributedStringValue;
- (double)desiredHeight;
- (void)setupWarningLabel;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)updateWarningLabel;
- (id)warningMessageText;

@end
