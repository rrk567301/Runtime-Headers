@class NSString, PKPaymentOptionsRecents, NSOrderedSet;

@interface PKPaymentPreferenceContact : PKPaymentPreference

@property (retain, nonatomic) PKPaymentOptionsRecents *paymentOptionsRecents;
@property (copy, nonatomic) NSString *contactKey;
@property (copy, nonatomic) NSOrderedSet *contactKeys;
@property (copy, nonatomic) NSString *addNewTitle;
@property (copy, nonatomic) NSString *addExistingTitle;
@property (copy, nonatomic) NSString *editExistingTitle;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL showPhoneticName;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 preferences:(id)a1 selectedIndex:(unsigned long long)a2 readOnly:(BOOL)a3;
- (void)setErrors:(id)a0 forPreference:(id)a1;
- (id)errorsForPreference:(id)a0;
- (BOOL)preferenceObject:(id)a0 representsContact:(id)a1;
- (BOOL)supportsDeletion;
- (id)_removeDuplicateContacts:(id)a0;
- (void)mergeRecentsAndMeCard;
- (void)_mergeContacts:(id)a0;
- (void)_updateSelectedIndex;
- (long long)indexOfContact:(id)a0;

@end
