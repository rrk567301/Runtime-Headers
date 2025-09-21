@class NSString, NSData;

@interface ORCHSchemaORCHAceCommandStarted : SISchemaInstrumentationMessage {
    struct { unsigned char aceCommandType : 1; } _has;
}

@property (copy, nonatomic) NSString *aceCommandName;
@property (nonatomic) char hasAceCommandName;
@property (nonatomic) int aceCommandType;
@property (nonatomic) char hasAceCommandType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAceCommandName;
- (void)deleteAceCommandType;
- (id)suppressMessageUnderConditions;

@end
