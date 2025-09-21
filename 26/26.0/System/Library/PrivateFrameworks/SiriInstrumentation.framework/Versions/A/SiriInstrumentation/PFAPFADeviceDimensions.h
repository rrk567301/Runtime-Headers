@class NSString, NSData;

@interface PFAPFADeviceDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char programCode : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) int programCode;
@property (nonatomic) BOOL hasProgramCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteDeviceType;
- (void)deleteProgramCode;
- (void)deleteSystemBuild;

@end
