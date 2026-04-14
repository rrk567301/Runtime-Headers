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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFollowupType;
- (void)deleteMapsAction;
- (void)deleteMapsActionType;

@end
