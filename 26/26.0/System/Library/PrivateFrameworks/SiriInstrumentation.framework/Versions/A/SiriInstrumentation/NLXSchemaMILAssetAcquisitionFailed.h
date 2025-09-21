@class NSString, NSData;

@interface NLXSchemaMILAssetAcquisitionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char acquisitionType : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int acquisitionType;
@property (nonatomic) BOOL hasAcquisitionType;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
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
- (void)deleteErrorCode;
- (void)deleteAcquisitionType;
- (void)deleteErrorMessage;

@end
