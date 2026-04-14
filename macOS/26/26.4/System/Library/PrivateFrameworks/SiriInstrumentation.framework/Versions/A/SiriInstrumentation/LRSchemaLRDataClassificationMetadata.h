@class NSString, NSData;

@interface LRSchemaLRDataClassificationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char partOfARequest : 1; unsigned char kind : 1; } _has;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) BOOL partOfARequest;
@property (nonatomic) BOOL hasPartOfARequest;
@property (nonatomic) int kind;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int general;
@property (nonatomic) BOOL hasGeneral;
@property (nonatomic) int onDevice;
@property (nonatomic) BOOL hasOnDevice;
@property (nonatomic) int tool;
@property (nonatomic) BOOL hasTool;
@property (nonatomic) int sensor;
@property (nonatomic) BOOL hasSensor;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichProvenance_Type;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGeneral;
- (void)deleteKind;
- (void)deleteOnDevice;
- (void)deletePartOfARequest;
- (void)deleteSensor;
- (void)deleteTool;

@end
