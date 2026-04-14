@class NSString, NSDictionary, NSData, NSDate, NSURLProtectionSpace;

@interface WBSGeneratedPassword : NSObject <WBSSavedAccountSidecarHistoryItem> {
    NSDictionary *_originalKeychainDictionary;
}

@property (class, readonly, nonatomic) NSString *privateBrowsingSentinel;

@property (readonly, copy, nonatomic) NSData *keychainPersistentReference;
@property (readonly, nonatomic) BOOL wasGeneratedInPrivateBrowsingSession;
@property (readonly, nonatomic) NSDate *generationDate;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keychainDictionaryRepresentationWithPassword:(id)a0;

- (void).cxx_destruct;
- (id)initWithKeychainItemDictionary:(id)a0;
- (id)_initWithPassword:(id)a0 protectionSpace:(id)a1 generationDate:(id)a2 wasGeneratedInPrivateBrowsingSession:(BOOL)a3 keychainPersistentReference:(id)a4 originalDictionary:(id)a5;
- (id)initWithPassword:(id)a0 protectionSpace:(id)a1 generationDate:(id)a2 wasGeneratedInPrivateBrowsingSession:(BOOL)a3;
- (id)keychainDictionaryRepresentationWithPassword:(id)a0;

@end
