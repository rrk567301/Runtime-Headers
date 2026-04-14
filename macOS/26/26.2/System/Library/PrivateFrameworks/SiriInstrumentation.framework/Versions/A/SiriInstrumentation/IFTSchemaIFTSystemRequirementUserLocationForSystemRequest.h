@class NSData;

@interface IFTSchemaIFTSystemRequirementUserLocationForSystemRequest : SISchemaInstrumentationMessage {
    struct { unsigned char isPreciseLocationRequired : 1; unsigned char timeoutForLocationFetch : 1; } _has;
}

@property (nonatomic) BOOL isPreciseLocationRequired;
@property (nonatomic) BOOL hasIsPreciseLocationRequired;
@property (nonatomic) long long timeoutForLocationFetch;
@property (nonatomic) BOOL hasTimeoutForLocationFetch;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsPreciseLocationRequired;
- (void)deleteTimeoutForLocationFetch;

@end
