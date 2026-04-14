@class CNContactStore, NSString, NSMutableArray;

@interface CIMContactsReader : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (copy, nonatomic) NSString *inputMode;
@property (retain, nonatomic) NSMutableArray *cachedEntries;

+ (id)sharedContactsReader;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)contactsChanged;
- (id)contactsNamePhoneticPairsFromInputMode:(id)a0;
- (id)convertPinyinPhoneticToInputString:(id)a0;
- (id)transliterate:(id)a0 inputMode:(id)a1;
- (id)contactsNameWubiCodePairsWithMecabraEnvironment:(id)a0;

@end
