@class NSString, NSData;

@interface PFAPFADeviceDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char programCode : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) char hasDeviceType;
@property (nonatomic) int programCode;
@property (nonatomic) char hasProgramCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceType;
- (void)deleteProgramCode;
- (void)deleteSystemBuild;
- (id)suppressMessageUnderConditions;

@end
