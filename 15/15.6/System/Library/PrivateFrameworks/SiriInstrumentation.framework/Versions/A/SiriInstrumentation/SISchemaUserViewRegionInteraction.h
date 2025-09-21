@class NSData;

@interface SISchemaUserViewRegionInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char viewRegionDesignation : 1; unsigned char userViewInteraction : 1; } _has;
}

@property (nonatomic) int viewRegionDesignation;
@property (nonatomic) char hasViewRegionDesignation;
@property (nonatomic) int userViewInteraction;
@property (nonatomic) char hasUserViewInteraction;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUserViewInteraction;
- (void)deleteViewRegionDesignation;
- (id)suppressMessageUnderConditions;

@end
