@class NSDate, ICURLBagEnhancedAudioConfiguration, NSArray, NSString, ICURLBagRadioConfiguration, NSMutableDictionary, NSDictionary, NSSet, NSObject, ICURLBagLibraryDAAPConfiguration, NSNumber;
@protocol OS_dispatch_queue;

@interface ICURLBag : NSObject

@property (copy, nonatomic) NSDictionary *bagValues;
@property (copy, nonatomic) NSDictionary *fallbackValues;
@property (retain, nonatomic) NSMutableDictionary *convertedActionsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *GUIDURLRegexPatterns;
@property (retain, nonatomic) NSSet *GUIDURLSchemes;
@property (readonly, nonatomic) NSDictionary *_propertyListRepresentation;
@property (copy, nonatomic, setter=_setExpirationDate:) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSDictionary *allValues;
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
@property (readonly, copy, nonatomic) NSNumber *sourceAccountDSID;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (id)dictionaryForBagKey:(id)a0;
- (id)valueForBagKey:(id)a0;
- (id)urlForBagKey:(id)a0;
- (BOOL)boolValueForBagKey:(id)a0;
- (id)_initWithDictionary:(id)a0 fallbackValues:(id)a1 requestDate:(id)a2 expirationDate:(id)a3 serverCorrelationKey:(id)a4 serverEnvironment:(id)a5 profileName:(id)a6 sourceAccountDSID:(id)a7;
- (id)_initWithPropertyListRepresentation:(id)a0;
- (BOOL)isTrustedHostForURL:(id)a0;
- (BOOL)shouldAppendDeviceGUIDForURL:(id)a0;
- (BOOL)shouldAppendMachineDataHeadersForURL:(id)a0;
- (id)mescalConfigurationForRequest:(id)a0;
- (id)_urlStringFromBagStringValue:(id)a0;
- (void)_validateGUIDURLConfigIfNeeded;
- (BOOL)_shouldMescalSignBodyForURL:(id)a0 withSignatureConfiguration:(id)a1;
- (id)mescalConfigurationForResponse:(id)a0;
- (id)_initWithDictionary:(id)a0 requestDate:(id)a1 expirationDate:(id)a2 serverCorrelationKey:(id)a3 serverEnvironment:(id)a4 profileName:(id)a5 sourceAccountDSID:(id)a6;
- (BOOL)hasValueForBagKey:(id)a0;
- (id)stringForBagKey:(id)a0;
- (id)arrayForBagKey:(id)a0;
- (long long)int64ValueForBagKey:(id)a0;
- (id)mescalConfigurationForRequestURL:(id)a0;
- (id)mescalConfigurationForResponseURL:(id)a0;

@end
