@class NSData;

@interface POMMESSchemaPOMMESSiriPegasusMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char interactionType : 1; unsigned char isCarplay : 1; unsigned char movieRestriction : 1; unsigned char tvRestriction : 1; unsigned char isInRestrictedSharingMode : 1; unsigned char isExplicitContentAllowed : 1; unsigned char isWebContentDisabled : 1; } _has;
}

@property (nonatomic) int interactionType;
@property (nonatomic) BOOL hasInteractionType;
@property (nonatomic) BOOL isCarplay;
@property (nonatomic) BOOL hasIsCarplay;
@property (nonatomic) unsigned int movieRestriction;
@property (nonatomic) BOOL hasMovieRestriction;
@property (nonatomic) unsigned int tvRestriction;
@property (nonatomic) BOOL hasTvRestriction;
@property (nonatomic) BOOL isInRestrictedSharingMode;
@property (nonatomic) BOOL hasIsInRestrictedSharingMode;
@property (nonatomic) BOOL isExplicitContentAllowed;
@property (nonatomic) BOOL hasIsExplicitContentAllowed;
@property (nonatomic) BOOL isWebContentDisabled;
@property (nonatomic) BOOL hasIsWebContentDisabled;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInteractionType;
- (void)deleteIsCarplay;
- (void)deleteMovieRestriction;
- (void)deleteTvRestriction;
- (void)deleteIsInRestrictedSharingMode;
- (void)deleteIsExplicitContentAllowed;
- (void)deleteIsWebContentDisabled;
- (id)suppressMessageUnderConditions;

@end
