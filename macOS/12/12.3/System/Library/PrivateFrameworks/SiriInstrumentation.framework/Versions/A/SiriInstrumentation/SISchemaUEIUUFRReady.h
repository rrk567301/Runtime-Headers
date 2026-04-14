@class NSString, NSData;

@interface SISchemaUEIUUFRReady : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char uufrReadySource : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *aceCommandClass;
@property (nonatomic) BOOL hasAceCommandClass;
@property (copy, nonatomic) NSString *aceViewId;
@property (nonatomic) BOOL hasAceViewId;
@property (nonatomic) int uufrReadySource;
@property (nonatomic) BOOL hasUufrReadySource;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (void)deleteAceCommandClass;
- (void)deleteAceViewId;
- (void)deleteUufrReadySource;
- (id)suppressMessageUnderConditions;

@end
