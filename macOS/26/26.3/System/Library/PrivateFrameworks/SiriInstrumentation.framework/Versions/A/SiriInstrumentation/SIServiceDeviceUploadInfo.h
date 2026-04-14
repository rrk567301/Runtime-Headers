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
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteNs_relative_to_boot;
- (void)deleteRef_id;

@end
