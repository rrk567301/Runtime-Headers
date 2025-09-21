@class NSString, NSData;

@interface PETSchemaPETMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char upload_time : 1; unsigned char is_internal : 1; unsigned char is_seed : 1; unsigned char is_gm : 1; unsigned char config_version : 1; unsigned char is_internal_carry : 1; unsigned char is_config_enabled : 1; unsigned char is_testing_data : 1; unsigned char is_trial_upload : 1; } _has;
}

@property (nonatomic) unsigned long long upload_time;
@property (nonatomic) char hasUpload_time;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) char hasPlatform;
@property (copy, nonatomic) NSString *device;
@property (nonatomic) char hasDevice;
@property (copy, nonatomic) NSString *build;
@property (nonatomic) char hasBuild;
@property (nonatomic) char is_internal;
@property (nonatomic) char hasIs_internal;
@property (nonatomic) char is_seed;
@property (nonatomic) char hasIs_seed;
@property (nonatomic) char is_gm;
@property (nonatomic) char hasIs_gm;
@property (copy, nonatomic) NSString *country;
@property (nonatomic) char hasCountry;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) char hasLanguage;
@property (nonatomic) unsigned int config_version;
@property (nonatomic) char hasConfig_version;
@property (copy, nonatomic) NSString *pseudo_device_id;
@property (nonatomic) char hasPseudo_device_id;
@property (nonatomic) char is_internal_carry;
@property (nonatomic) char hasIs_internal_carry;
@property (nonatomic) char is_config_enabled;
@property (nonatomic) char hasIs_config_enabled;
@property (copy, nonatomic) NSString *message_group;
@property (nonatomic) char hasMessage_group;
@property (copy, nonatomic) NSString *msg_type;
@property (nonatomic) char hasMsg_type;
@property (nonatomic) char is_testing_data;
@property (nonatomic) char hasIs_testing_data;
@property (nonatomic) char is_trial_upload;
@property (nonatomic) char hasIs_trial_upload;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBuild;
- (void)deleteConfig_version;
- (void)deleteCountry;
- (void)deleteDevice;
- (void)deleteIs_config_enabled;
- (void)deleteIs_gm;
- (void)deleteIs_internal;
- (void)deleteIs_internal_carry;
- (void)deleteIs_seed;
- (void)deleteIs_testing_data;
- (void)deleteIs_trial_upload;
- (void)deleteLanguage;
- (void)deleteMessage_group;
- (void)deleteMsg_type;
- (void)deletePlatform;
- (void)deletePseudo_device_id;
- (void)deleteUpload_time;
- (id)suppressMessageUnderConditions;

@end
