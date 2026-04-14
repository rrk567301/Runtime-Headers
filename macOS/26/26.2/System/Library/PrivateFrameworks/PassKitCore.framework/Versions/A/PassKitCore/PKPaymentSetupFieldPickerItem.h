@class NSString, PKPaymentSetupFieldPicker;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (readonly, copy, nonatomic) NSString *submissionConfirmationTitle;
@property (readonly, copy, nonatomic) NSString *submissionConfirmationDescription;
@property (readonly, copy, nonatomic) PKPaymentSetupFieldPicker *nextLevelPicker;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)initWithDictionary:(id)a0;

@end
