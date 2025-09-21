@class NSString, NSArray, NSSet, NSDictionary;

@interface SRSensorDescription : NSObject {
    NSString *_additionalSampleDataNoteKey;
    NSString *_localizedAdditionalSampleDataNote;
    unsigned int _legacySampleClassLinkedBefore;
    NSString *_sampleClass;
    NSString *_exportingSampleClass;
    NSSet *_eligibleDaemons;
    NSString *_legacySampleClass;
    NSSet *_additions;
    NSDictionary *_supportedPlatforms;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *authorizationService;
@property (readonly, copy) NSArray *relatedSettingsCategories;
@property (readonly, copy) NSString *publicEntitlementValue;
@property (readonly, copy) NSString *sampleClass;
@property (readonly, copy) NSString *exportingSampleClass;
@property (readonly, copy) NSString *localizedAdditionalSampleDataNote;
@property (readonly, copy) NSString *infoPlistAuthorizationCategory;
@property (readonly) BOOL metadataEnabled;
@property (readonly) BOOL sensorConfigurationEnabled;
@property (readonly, copy) NSString *writerAuthorizationService;
@property (readonly) long long authorizationVersion;
@property (readonly, copy) NSString *onDemandWriterService;
@property (readonly) BOOL supportsCurrentPlatform;
@property (readonly, copy) NSString *authorizationStoreCohort;
@property (readonly, copy) NSString *legacyName;
@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly, copy, nonatomic) NSSet *eligibleDaemons;
@property (readonly, nonatomic) double roundingInterval;
@property (readonly, nonatomic) long long datastoreBackend;

+ (id)allDescriptions;
+ (id)sensorDescriptionForSensor:(id)a0;
+ (id)sensorDescriptionForDeletionRecordFromDescription:(id)a0;
+ (id)sensorDescriptionsForAuthorizationService:(id)a0;
+ (void)initialize;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)description;
- (BOOL)supportsPlatform:(id)a0;

@end
