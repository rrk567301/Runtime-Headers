@class NSString, NSData;

@interface SIServiceDeviceUploadInfo : SISchemaInstrumentationMessage {
    struct { unsigned char ns_relative_to_boot : 1; } _has;
}

@property (copy, nonatomic) NSString *ref_id;
@property (nonatomic) BOOL hasRef_id;
@property (nonatomic) unsigned long long ns_relative_to_boot;
@property (nonatomic) BOOL hasNs_relative_to_boot;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNs_relative_to_boot;
- (void)deleteRef_id;

@end
