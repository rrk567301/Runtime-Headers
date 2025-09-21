@class NSString;

@interface ProfileTitleTextField : TextFieldThatSelectsAllWhenEditing

@property (nonatomic, getter=isDefaultProfile) char defaultProfile;
@property (copy, nonatomic) NSString *profileTitle;

- (void).cxx_destruct;
- (char)becomeFirstResponder;
- (char)resignFirstResponder;
- (void)textDidEndEditing:(id)a0;
- (char)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (void)_updateStringValueIsEditing:(char)a0;

@end
