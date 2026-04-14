@class NSString;

@interface BMCommAppsHoldAssistFedStats : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int protoVersion;
@property (nonatomic) BOOL hasProtoVersion;
@property (readonly, nonatomic) NSString *remotePhoneNumber;
@property (readonly, nonatomic) unsigned int holdDuration;
@property (nonatomic) BOOL hasHoldDuration;
@property (readonly, nonatomic) int holdAssistMLClassification;
@property (readonly, nonatomic) int holdAssistRecommendation;
@property (readonly, nonatomic) int holdAssistObservation;
@property (readonly, nonatomic) NSString *remotePhoneNumberCountryCode;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithProtoVersion:(id)a0 remotePhoneNumber:(id)a1 holdDuration:(id)a2 holdAssistMLClassification:(int)a3 holdAssistRecommendation:(int)a4 holdAssistObservation:(int)a5;
- (id)initWithProtoVersion:(id)a0 remotePhoneNumber:(id)a1 holdDuration:(id)a2 holdAssistMLClassification:(int)a3 holdAssistRecommendation:(int)a4 holdAssistObservation:(int)a5 remotePhoneNumberCountryCode:(id)a6;

@end
