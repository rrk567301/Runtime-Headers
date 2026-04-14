@class CNContactStore, NSString, CNContact, CNContactProperty;

@interface CNFavoritesEntry : NSObject {
    NSString *_name;
    NSString *_actionType;
    NSString *_bundleIdentifier;
    CNContactStore *_contactStore;
    NSString *_label;
    NSString *_originalName;
    CNContact *_contact;
}

@property (retain, nonatomic) NSString *entryIdentifier;
@property (retain, nonatomic) NSString *propertyKey;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSString *labeledValueIdentifier;
@property (retain, nonatomic) NSString *actionChannel;
@property (retain, nonatomic) NSString *oldContactIdentifier;
@property (nonatomic) BOOL dirty;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (BOOL)arePhoneNumbersEqual:(id)a0 other:(id)a1;
+ (id)descriptorsForRequiredKeysForPropertyKey:(id)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)rematch;
- (void)applyChangeRecord:(id)a0;
- (id)entryRepresentation;
- (id)initWithContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4 store:(id)a5;
- (id)initWithDictionaryRepresentation:(id)a0 store:(id)a1;
- (id)initWithEntryRepresentation:(id)a0 store:(id)a1;
- (BOOL)rematchWithContacts;
- (void)resetContactMatch;

@end
