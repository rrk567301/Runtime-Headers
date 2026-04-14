@class NSData;

@interface SISchemaUserViewRegionInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char viewRegionDesignation : 1; unsigned char userViewInteraction : 1; } _has;
}

@property (nonatomic) int viewRegionDesignation;
@property (nonatomic) BOOL hasViewRegionDesignation;
@property (nonatomic) int userViewInteraction;
@property (nonatomic) BOOL hasUserViewInteraction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteUserViewInteraction;
- (void)deleteViewRegionDesignation;

@end
