@class NSString;

@interface EKUICommentGadget : EKUILabledTextFieldGadget <NSTextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (double)baselineOffset;
- (void)controlTextDidChange:(id)a0;
- (char)isEditable;
- (char)needsExpansion;
- (id)placeholderString;
- (id)labelString;
- (id)initWithViewController:(id)a0;
- (id)_responseCommentForDisplay;
- (char)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
