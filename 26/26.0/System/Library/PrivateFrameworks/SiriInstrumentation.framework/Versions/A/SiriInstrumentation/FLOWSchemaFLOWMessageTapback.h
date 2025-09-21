@class NSData;

@interface FLOWSchemaFLOWMessageTapback : SISchemaInstrumentationMessage {
    struct { unsigned char isTapback : 1; unsigned char isTapbackRemoved : 1; unsigned char isGUITapback : 1; unsigned char tapbackWasChanged : 1; } _has;
}

@property (nonatomic) BOOL isTapback;
@property (nonatomic) BOOL hasIsTapback;
@property (nonatomic) BOOL isTapbackRemoved;
@property (nonatomic) BOOL hasIsTapbackRemoved;
@property (nonatomic) BOOL isGUITapback;
@property (nonatomic) BOOL hasIsGUITapback;
@property (nonatomic) BOOL tapbackWasChanged;
@property (nonatomic) BOOL hasTapbackWasChanged;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsTapback;
- (void)deleteIsGUITapback;
- (void)deleteIsTapbackRemoved;
- (void)deleteTapbackWasChanged;

@end
