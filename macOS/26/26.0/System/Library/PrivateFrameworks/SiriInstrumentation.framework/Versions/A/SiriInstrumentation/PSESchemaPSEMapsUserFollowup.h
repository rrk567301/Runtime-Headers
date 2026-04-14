@class NSString, NSData;

@interface PSESchemaPSEMapsUserFollowup : SISchemaInstrumentationMessage {
    struct { unsigned char followupType : 1; unsigned char mapsAction : 1; } _has;
}

@property (nonatomic) int followupType;
@property (nonatomic) BOOL hasFollowupType;
@property (nonatomic) int mapsAction;
@property (nonatomic) BOOL hasMapsAction;
@property (copy, nonatomic) NSString *mapsActionType;
@property (nonatomic) BOOL hasMapsActionType;
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
- (void)deleteFollowupType;
- (void)deleteMapsAction;
- (void)deleteMapsActionType;

@end
