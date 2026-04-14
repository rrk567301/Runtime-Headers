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

+ (id)whitespaceText;
+ (id)lockGlyphAttachmentText;
+ (id)labelWithText:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (id)attributedStringValue;
- (void)viewDidLoad;
- (void)setContact:(id)a0;
- (id)paragraphStyle;
- (double)desiredHeight;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)setupWarningLabel;
- (void)updateWarningLabel;
- (id)warningMessageText;

@end
