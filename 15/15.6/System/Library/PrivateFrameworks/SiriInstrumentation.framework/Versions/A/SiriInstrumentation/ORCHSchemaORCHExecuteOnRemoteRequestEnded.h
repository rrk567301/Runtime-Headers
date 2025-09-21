@class NSData;

@interface ORCHSchemaORCHExecuteOnRemoteRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char aceCommandType : 1; } _has;
}

@property (nonatomic) int aceCommandType;
@property (nonatomic) char hasAceCommandType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAceCommandType;
- (id)suppressMessageUnderConditions;

@end
