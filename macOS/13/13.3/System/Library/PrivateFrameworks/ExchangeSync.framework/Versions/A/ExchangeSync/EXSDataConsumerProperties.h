@interface EXSDataConsumerProperties : EXSBaseProperties

@property (nonatomic) long long internalIDMappingVersion;
@property (readonly, nonatomic) BOOL internalIDVersionMappingVersionSpecified;

+ (id)itemPropertiesFromData:(id)a0;

- (id)init;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (void)populateFromPropertiesDictionary:(id)a0;

@end
