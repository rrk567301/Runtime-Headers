@class NSData, POMMESSchemaPOMMESDeviceState;

@interface POMMESSchemaPOMMESSiriPegasusMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char interactionType : 1; unsigned char isCarplay : 1; unsigned char movieRestriction : 1; unsigned char tvRestriction : 1; unsigned char isInRestrictedSharingMode : 1; unsigned char isExplicitContentAllowed : 1; unsigned char isWebContentDisabled : 1; } _has;
}

@property (nonatomic) int interactionType;
@property (nonatomic) char hasInteractionType;
@property (nonatomic) char isCarplay;
@property (nonatomic) char hasIsCarplay;
@property (nonatomic) unsigned int movieRestriction;
@property (nonatomic) char hasMovieRestriction;
@property (nonatomic) unsigned int tvRestriction;
@property (nonatomic) char hasTvRestriction;
@property (nonatomic) char isInRestrictedSharingMode;
@property (nonatomic) char hasIsInRestrictedSharingMode;
@property (nonatomic) char isExplicitContentAllowed;
@property (nonatomic) char hasIsExplicitContentAllowed;
@property (nonatomic) char isWebContentDisabled;
@property (nonatomic) char hasIsWebContentDisabled;
@property (retain, nonatomic) POMMESSchemaPOMMESDeviceState *deviceState;
@property (nonatomic) char hasDeviceState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsCarplay;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsInRestrictedSharingMode;
- (void)deleteDeviceState;
- (void)deleteInteractionType;
- (void)deleteIsExplicitContentAllowed;
- (void)deleteIsWebContentDisabled;
- (void)deleteMovieRestriction;
- (void)deleteTvRestriction;
- (id)suppressMessageUnderConditions;

@end
