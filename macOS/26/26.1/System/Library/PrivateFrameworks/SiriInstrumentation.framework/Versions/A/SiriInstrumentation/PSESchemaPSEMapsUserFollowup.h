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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteFollowupType;
- (void)deleteMapsAction;
- (void)deleteMapsActionType;

@end
