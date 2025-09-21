@class NSString, NSDictionary, NSDate, NSNumber;

@interface WLKServerConfigurationResponse : NSObject <WLKCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isFromDiskCache) char fromDiskCache;
@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) unsigned long long environmentHash;
@property (readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (readonly, nonatomic) NSString *vppaStatusString;
@property (readonly, nonatomic) long long vppaStatus;
@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, nonatomic) char naturalLanguageSearchProperty;
@property (readonly, nonatomic) NSDictionary *searchReportConcernProps;
@property (readonly, copy, nonatomic) NSString *utsk;
@property (readonly, nonatomic, getter=isActiveUser) char activeUser;
@property (readonly, nonatomic, getter=isFavoritesSyncEnabled) char favoritesSyncEnabled;
@property (readonly, copy, nonatomic) NSNumber *vppaSessionDurationInMillis;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)_utskProperties;
- (id)_routes;
- (id)_userProperties;
- (id)_VPPAInfo;
- (id)_applicationProperties;
- (id)_expirationDateFromResponse:(id)a0;
- (id)_requiredRequestKVPMap;
- (id)_requiredRequestKVPMap:(id)a0;
- (id)configurationResponseByReplacingUTSK:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0 expirationDate:(id)a1 environmentHash:(unsigned long long)a2;
- (char)isValidIgnoringExpiration;
- (char)isValidWithinExtendedExpiration:(double)a0;
- (id)requiredRequestKeyValuePairsDictionary:(id)a0;
- (id)requiredRequestKeyValuePairsForType:(id)a0;
- (id)serverRouteNamed:(id)a0;
- (id)utsc;

@end
