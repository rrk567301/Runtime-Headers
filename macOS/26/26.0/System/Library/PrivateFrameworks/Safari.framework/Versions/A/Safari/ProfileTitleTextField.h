@class NSString;

@interface ProfileTitleTextField : TextFieldThatSelectsAllWhenEditing

@property (nonatomic, getter=isDefaultProfile) BOOL defaultProfile;
@property (copy, nonatomic) NSString *profileTitle;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)a0;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (void)_updateStringValueIsEditing:(BOOL)a0;

@end
