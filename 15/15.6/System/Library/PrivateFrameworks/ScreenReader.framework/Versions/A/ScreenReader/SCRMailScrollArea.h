@class NSArray, NSString;
@protocol SCRMailMessageContent;

@interface SCRMailScrollArea : SCRScrollArea <SCRMailMessageContentHost>

@property (readonly, nonatomic) id<SCRMailMessageContent> messageContent;
@property (readonly, nonatomic) NSArray *potentialMessageContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)_isMessageBody;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (id)fallbackLinkedUIElements;
- (id)fullItemDescriptionForMenu;
- (char)readyToHaveKeyboardFocus;
- (char)shouldPromoteUIElement:(id)a0;
- (char)showRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
