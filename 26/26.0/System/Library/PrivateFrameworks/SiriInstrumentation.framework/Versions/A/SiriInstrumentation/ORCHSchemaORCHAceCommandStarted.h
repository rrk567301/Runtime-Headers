@class NSString, NSData;

@interface ORCHSchemaORCHAceCommandStarted : SISchemaInstrumentationMessage {
    struct { unsigned char aceCommandType : 1; } _has;
}

@property (copy, nonatomic) NSString *aceCommandName;
@property (nonatomic) BOOL hasAceCommandName;
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
- (void).cxx_destruct;
- (void)deleteAceCommandName;
- (void)deleteAceCommandType;

@end
