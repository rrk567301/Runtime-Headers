@class KTIDStaticKeyStoreEntry, CNContact;

@interface CNUIStaticIdentity : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) KTIDStaticKeyStoreEntry *storeEntry;

+ (id)ktStore;
+ (char)addStaticKeyWithPublicIDString:(id)a0 contact:(id)a1;
+ (id)findStoreEntryByContact:(id)a0;
+ (char)isHandleInStore:(id)a0;
+ (char)isValidStaticKeyString:(id)a0;
+ (id)makeKTPublicIDWithString:(id)a0;
+ (char)removeAccountKeyFromContact:(id)a0;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0;
- (id)verificationCode;
- (char)isHandleInStore:(id)a0;

@end
