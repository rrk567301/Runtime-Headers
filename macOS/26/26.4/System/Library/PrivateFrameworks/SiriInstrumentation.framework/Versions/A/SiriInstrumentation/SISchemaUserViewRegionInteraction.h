@class NSData;

@interface SISchemaUserViewRegionInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char viewRegionDesignation : 1; unsigned char userViewInteraction : 1; } _has;
}

@property (nonatomic) int viewRegionDesignation;
@property (nonatomic) BOOL hasViewRegionDesignation;
@property (nonatomic) int userViewInteraction;
@property (nonatomic) BOOL hasUserViewInteraction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUserViewInteraction;
- (void)deleteViewRegionDesignation;

@end
