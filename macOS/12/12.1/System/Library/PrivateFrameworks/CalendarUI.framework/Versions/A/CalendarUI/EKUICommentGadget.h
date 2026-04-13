@class NSString;

@interface EKUICommentGadget : EKUILabledTextFieldGadget <NSTextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (void)controlTextDidChange:(id)a0;
- (double)baselineOffset;
- (id)placeholderString;
- (BOOL)needsExpansion;
- (id)labelString;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
