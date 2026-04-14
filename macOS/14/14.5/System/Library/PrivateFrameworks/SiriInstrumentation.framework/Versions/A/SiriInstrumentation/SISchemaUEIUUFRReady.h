@class NSString, NSArray, NSData;

@interface SISchemaUEIUUFRReady : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char uufrReadySource : 1; unsigned char dialogPhase : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *aceCommandClass;
@property (nonatomic) BOOL hasAceCommandClass;
@property (copy, nonatomic) NSString *aceViewId;
@property (nonatomic) BOOL hasAceViewId;
@property (nonatomic) int uufrReadySource;
@property (nonatomic) BOOL hasUufrReadySource;
@property (nonatomic) int dialogPhase;
@property (nonatomic) BOOL hasDialogPhase;
@property (copy, nonatomic) NSArray *dialogIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAceViewId;
- (void)addDialogIdentifiers:(id)a0;
- (void)clearDialogIdentifiers;
- (void)deleteAceCommandClass;
- (void)deleteDialogIdentifiers;
- (void)deleteDialogPhase;
- (void)deleteExists;
- (void)deleteUufrReadySource;
- (id)dialogIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)dialogIdentifiersCount;
- (id)suppressMessageUnderConditions;

@end
