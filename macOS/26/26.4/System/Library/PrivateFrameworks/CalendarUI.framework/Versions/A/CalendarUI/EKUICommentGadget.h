@class NSString;

@interface EKUICommentGadget : EKUILabledTextFieldGadget <NSTextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (double)baselineOffset;
- (void)controlTextDidChange:(id)a0;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (BOOL)needsExpansion;
- (id)placeholderString;
- (id)labelString;
- (id)_responseCommentForDisplay;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
