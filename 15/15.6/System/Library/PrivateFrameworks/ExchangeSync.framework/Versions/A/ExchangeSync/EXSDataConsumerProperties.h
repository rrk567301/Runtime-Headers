@interface EXSDataConsumerProperties : EXSBaseProperties

@property (nonatomic) long long internalIDMappingVersion;
@property (readonly, nonatomic) char internalIDVersionMappingVersionSpecified;
@property (nonatomic) long long dataConsumerMigrationVersion;
@property (readonly, nonatomic) char dataConsumerMigrationVersionSpecified;

+ (id)itemPropertiesFromData:(id)a0;

- (id)init;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (void)populateFromPropertiesDictionary:(id)a0;

@end
