@class NSString, NSData;

@interface PSESchemaPSEMapsUserFollowup : SISchemaInstrumentationMessage {
    struct { unsigned char followupType : 1; unsigned char mapsAction : 1; } _has;
}

@property (nonatomic) int followupType;
@property (nonatomic) char hasFollowupType;
@property (nonatomic) int mapsAction;
@property (nonatomic) char hasMapsAction;
@property (copy, nonatomic) NSString *mapsActionType;
@property (nonatomic) char hasMapsActionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFollowupType;
- (void)deleteMapsAction;
- (void)deleteMapsActionType;
- (id)suppressMessageUnderConditions;

@end
