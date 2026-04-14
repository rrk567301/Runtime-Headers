@class NSArray, NSDictionary, NSString, NSData;

@interface CSInlineDonation : NSObject

@property (readonly, nonatomic) NSArray *addOrUpdateItems;
@property (readonly, nonatomic) NSArray *deleteItemIdentifiers;
@property (readonly, nonatomic) NSArray *deleteDomainIdentifiers;
@property (readonly, nonatomic) BOOL deleteAllItems;
@property (readonly, nonatomic) NSDictionary *associatedTextContent;
@property (readonly, nonatomic) NSDictionary *associatedHTMLContent;
@property (readonly, nonatomic) BOOL isInlineCacheEnabled;
@property (readonly, nonatomic) NSString *clientStateName;
@property (readonly, nonatomic) NSData *updatedClientState;
@property (readonly, nonatomic) NSData *expectedClientState;
@property (readonly, nonatomic) unsigned long long itemsDataSize;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) long long donationType;
@property (readonly, nonatomic) NSString *donationName;
@property (readonly, nonatomic) unsigned long long donationTimestamp;

+ (id)translator;
+ (id)sharedQueue;
+ (id)_inlineDonationWithOverrideBundleID:(id)a0 protectionClass:(id)a1 addOrUpdateItems:(id)a2 associatedTextContent:(id)a3 associatedHTMLContent:(id)a4 deleteItemIdentifiers:(id)a5 deleteDomainIdentifiers:(id)a6 deleteAllItems:(BOOL)a7 clientStateName:(id)a8 updatedClientState:(id)a9 expectedClientState:(id)a10 itemsDataSize:(unsigned long long)a11 options:(long long)a12 donationType:(long long)a13;
+ (id)inlineAddOrUpdateItems:(id)a0 associatedTextContent:(id)a1 associatedHTMLContent:(id)a2 deleteItemIdentifiers:(id)a3 overrideBundleID:(id)a4 protectionClass:(id)a5 clientStateName:(id)a6 updatedClientState:(id)a7 expectedClientState:(id)a8 itemsDataSize:(unsigned long long)a9 options:(long long)a10;
+ (id)inlineDeleteAllItemsWithOverrideBundleID:(id)a0 protectionClass:(id)a1 options:(long long)a2;
+ (id)inlineDeleteDomainIdentifiers:(id)a0 overrideBundleID:(id)a1 protectionClass:(id)a2 options:(long long)a3;
+ (BOOL)isInlineCascadeDonationEnabled;
+ (BOOL)isInlineDocumentCacheEnabledForBundleID:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)_perform:(id *)a0;
- (BOOL)_addOrUpdateItem:(id)a0 withIdentifier:(id)a1 donation:(id)a2 error:(id *)a3;
- (id)_logErrorWithCode:(long long)a0 description:(id)a1 underlying:(id)a2;
- (id)_reportErrorWithCode:(long long)a0 clientDescription:(id)a1 donationErrorCode:(long long)a2 underlying:(id)a3;
- (id)_resolveDonationName;
- (BOOL)_updateRevisionToken:(id)a0 error:(id *)a1;
- (id)initWithSourceIdentifier:(id)a0 addOrUpdateItems:(id)a1 associatedTextContent:(id)a2 associatedHTMLContent:(id)a3 deleteItemIdentifiers:(id)a4 deleteDomainIdentifiers:(id)a5 deleteAllItems:(BOOL)a6 clientStateName:(id)a7 updatedClientState:(id)a8 expectedClientState:(id)a9 itemsDataSize:(unsigned long long)a10 donationType:(long long)a11;
- (void)performDonationAsync:(id /* block */)a0;

@end
