@interface EXSDataConsumerProperties : EXSBaseProperties

@property (nonatomic) long long internalIDMappingVersion;
@property (readonly, nonatomic) BOOL internalIDVersionMappingVersionSpecified;

+ (id)itemPropertiesFromData:(id)a0;

- (id)init;
- (void)populateFromPropertiesDictionary:(id)a0;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;

@end
