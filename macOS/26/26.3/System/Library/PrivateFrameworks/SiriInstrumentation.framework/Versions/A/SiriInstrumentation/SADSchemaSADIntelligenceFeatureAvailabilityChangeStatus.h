@class NSString, NSData;

@interface SADSchemaSADIntelligenceFeatureAvailabilityChangeStatus : SISchemaInstrumentationMessage {
    struct { unsigned char newStatus : 1; unsigned char prevStatus : 1; unsigned char timeSinceLastStatusChangeInSeconds : 1; unsigned char timeSinceLastAvailabilityChangeInSeconds : 1; unsigned char isAppleIntelligenceEligible : 1; unsigned char timeSinceLastEligibleChangeInSeconds : 1; unsigned char isAppleIntelligenceAllowedThroughWaitlist : 1; unsigned char timeSinceLastWaitlistChangeInSeconds : 1; unsigned char isAppleIntelligenceToggled : 1; unsigned char timeSinceLastAppleIntelligenceToggleInSeconds : 1; unsigned char timeSinceLastBootInSeconds : 1; unsigned char currentSubscriptionHash : 1; unsigned char previousSubscriptionHash : 1; unsigned char timeSinceLastSubscriptionHashChangeInSeconds : 1; unsigned char currentMode : 1; } _has;
}

@property (nonatomic) unsigned long long newStatus;
@property (nonatomic) BOOL hasNewStatus;
@property (nonatomic) unsigned long long prevStatus;
@property (nonatomic) BOOL hasPrevStatus;
@property (nonatomic) double timeSinceLastStatusChangeInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastStatusChangeInSeconds;
@property (nonatomic) double timeSinceLastAvailabilityChangeInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastAvailabilityChangeInSeconds;
@property (nonatomic) BOOL isAppleIntelligenceEligible;
@property (nonatomic) BOOL hasIsAppleIntelligenceEligible;
@property (nonatomic) double timeSinceLastEligibleChangeInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastEligibleChangeInSeconds;
@property (nonatomic) BOOL isAppleIntelligenceAllowedThroughWaitlist;
@property (nonatomic) BOOL hasIsAppleIntelligenceAllowedThroughWaitlist;
@property (nonatomic) double timeSinceLastWaitlistChangeInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastWaitlistChangeInSeconds;
@property (nonatomic) BOOL isAppleIntelligenceToggled;
@property (nonatomic) BOOL hasIsAppleIntelligenceToggled;
@property (nonatomic) double timeSinceLastAppleIntelligenceToggleInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastAppleIntelligenceToggleInSeconds;
@property (nonatomic) double timeSinceLastBootInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastBootInSeconds;
@property (nonatomic) unsigned int currentSubscriptionHash;
@property (nonatomic) BOOL hasCurrentSubscriptionHash;
@property (nonatomic) unsigned int previousSubscriptionHash;
@property (nonatomic) BOOL hasPreviousSubscriptionHash;
@property (nonatomic) double timeSinceLastSubscriptionHashChangeInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastSubscriptionHashChangeInSeconds;
@property (copy, nonatomic) NSString *useCaseID;
@property (nonatomic) BOOL hasUseCaseID;
@property (nonatomic) int currentMode;
@property (nonatomic) BOOL hasCurrentMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteNewStatus;
- (void)deleteUseCaseID;
- (void)deleteCurrentMode;
- (void)deleteCurrentSubscriptionHash;
- (void)deleteIsAppleIntelligenceAllowedThroughWaitlist;
- (void)deleteIsAppleIntelligenceEligible;
- (void)deleteIsAppleIntelligenceToggled;
- (void)deletePrevStatus;
- (void)deletePreviousSubscriptionHash;
- (void)deleteTimeSinceLastAppleIntelligenceToggleInSeconds;
- (void)deleteTimeSinceLastAvailabilityChangeInSeconds;
- (void)deleteTimeSinceLastBootInSeconds;
- (void)deleteTimeSinceLastEligibleChangeInSeconds;
- (void)deleteTimeSinceLastStatusChangeInSeconds;
- (void)deleteTimeSinceLastSubscriptionHashChangeInSeconds;
- (void)deleteTimeSinceLastWaitlistChangeInSeconds;

@end
