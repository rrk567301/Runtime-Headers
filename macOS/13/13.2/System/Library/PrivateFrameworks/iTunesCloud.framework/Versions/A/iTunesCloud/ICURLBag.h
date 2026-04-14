@class NSDate, ICURLBagEnhancedAudioConfiguration, NSArray, NSString, NSSet, NSMutableDictionary, NSDictionary, ICURLBagRadioConfiguration, ICURLBagLibraryDAAPConfiguration, NSNumber;
@protocol AMSBagProtocol;

@interface ICURLBag : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, copy, nonatomic) NSArray *_allBagKeys;

@property (copy, nonatomic) NSDictionary *bagValues;
@property (copy, nonatomic) id<AMSBagProtocol> amsBag;
@property (copy, nonatomic) NSDictionary *fallbackValues;
@property (retain, nonatomic) NSMutableDictionary *convertedActionsCache;
@property (retain, nonatomic) NSArray *GUIDURLRegexPatterns;
@property (retain, nonatomic) NSSet *GUIDURLSchemes;
@property (readonly, copy, nonatomic) NSDictionary *_allValues;
@property (readonly, nonatomic) NSDictionary *_propertyListRepresentation;
@property (copy, nonatomic, setter=_setExpirationDate:) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL canPostKeybagSyncData;
@property (readonly, nonatomic) ICURLBagRadioConfiguration *radioConfiguration;
@property (readonly, nonatomic) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (readonly, nonatomic) ICURLBagEnhancedAudioConfiguration *enhancedAudioConfiguration;
@property (readonly, copy, nonatomic) NSString *storefrontHeaderSuffix;
@property (readonly, copy, nonatomic) NSDate *requestDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSString *serverCorrelationKey;
@property (readonly, copy, nonatomic) NSString *serverEnvironment;
@property (readonly, copy, nonatomic) NSString *profileName;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) NSNumber *sourceAccountDSID;
@property (readonly, copy, nonatomic) NSDictionary *allValues;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (id)stringForBagKey:(id)a0;
- (id)dictionaryForBagKey:(id)a0;
- (id)numberForBagKey:(id)a0;
- (id)_initWithDictionary:(id)a0 amsBag:(id)a1 fallbackValues:(id)a2 requestDate:(id)a3 expirationDate:(id)a4 serverCorrelationKey:(id)a5 serverEnvironment:(id)a6 profileName:(id)a7 profileVersion:(id)a8 sourceAccountDSID:(id)a9;
- (id)valueForBagKey:(id)a0;
- (id)valuesForBagKeys:(id)a0;
- (BOOL)hasValueForBagKey:(id)a0;
- (id)arrayForBagKey:(id)a0;
- (id)urlForBagKey:(id)a0;
- (long long)int64ValueForBagKey:(id)a0;
- (BOOL)boolValueForBagKey:(id)a0;
- (BOOL)shouldAppendDeviceGUIDForURL:(id)a0;
- (BOOL)shouldAppendMachineDataHeadersForURL:(id)a0;
- (id)mescalConfigurationForRequestURL:(id)a0;
- (id)mescalConfigurationForRequest:(id)a0;
- (id)mescalConfigurationForResponseURL:(id)a0;
- (id)mescalConfigurationForResponse:(id)a0;
- (BOOL)isTrustedHostForURL:(id)a0;
- (void)createAMSSnapshotBagWithCompletion:(id /* block */)a0;
- (id)_valueForBagKey:(id)a0;
- (id)_initWithPropertyListRepresentation:(id)a0;
- (BOOL)_shouldMescalSignBodyForURL:(id)a0 withSignatureConfiguration:(id)a1;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)_urlStringFromBagStringValue:(id)a0;
- (id)_logAndReturnFallbackValueForMissingKey:(id)a0;
- (id)_knownMissingBagValuesDictionary;
- (id)_knownMissingBagSubKeyValuesDictionary;
- (id)_knownOptionalBagKeys;
- (id)_knownIncorrectValues;

@end
