@class NSData;

@interface ORCHSchemaORCHExecuteOnRemoteRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char aceCommandType : 1; } _has;
}

@property (nonatomic) int aceCommandType;
@property (nonatomic) BOOL hasAceCommandType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteAceCommandType;

@end
