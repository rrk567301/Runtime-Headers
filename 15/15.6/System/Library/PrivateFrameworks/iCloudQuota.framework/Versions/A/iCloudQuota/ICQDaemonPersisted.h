@class NSString, NSDictionary, NSMutableDictionary, NSDate, NSNumber;

@interface ICQDaemonPersisted : NSObject

@property (class, readonly, nonatomic) NSDictionary *_placeholderPersistenceDictionary;
@property (class, readonly, nonatomic) NSString *persistenceDomain;
@property (class, readonly, nonatomic) NSString *persistenceKey;
@property (class, readonly, nonatomic) double defaultCallbackInterval;
@property (class, readonly, nonatomic) NSMutableDictionary *_mutablePlaceholderPersistanceDictionary;

@property (readonly, nonatomic) NSDictionary *_persistenceDictionary;
@property (retain, nonatomic) NSDate *retrievalDate;
@property (nonatomic) double callbackInterval;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) char expired;
@property (copy, nonatomic) NSString *accountAltDSID;
@property (retain, nonatomic) NSDictionary *serverDictionary;
@property (nonatomic) char failedToFetchFromServer;
@property (retain, nonatomic) NSDictionary *failureDetails;
@property (readonly, nonatomic) NSMutableDictionary *_mutablePersistenceDictionary;
@property (readonly, nonatomic) NSNumber *_cachedQuotaAvailable;

+ (id)userDefaults;
+ (id)persistedObject;
+ (id)_placeholderObject;
+ (void)clearPersistedObject;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (double)_callbackIntervalFromServerObject:(id)a0;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (id)_initWithAccountAltDSID:(id)a0 error:(id)a1;
- (char)isValidForAccount:(id)a0;
- (void)persistObject;

@end
