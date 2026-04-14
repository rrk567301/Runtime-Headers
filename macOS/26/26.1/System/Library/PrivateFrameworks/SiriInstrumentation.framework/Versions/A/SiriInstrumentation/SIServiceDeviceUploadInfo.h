@class NSString, NSData;

@interface SIServiceDeviceUploadInfo : SISchemaInstrumentationMessage {
    struct { unsigned char ns_relative_to_boot : 1; } _has;
}

@property (copy, nonatomic) NSString *ref_id;
@property (nonatomic) BOOL hasRef_id;
@property (nonatomic) unsigned long long ns_relative_to_boot;
@property (nonatomic) BOOL hasNs_relative_to_boot;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteNs_relative_to_boot;
- (void)deleteRef_id;

@end
