@class NSData;

@interface IFTSchemaIFTSystemRequirementUserLocationForSystemRequest : SISchemaInstrumentationMessage {
    struct { unsigned char isPreciseLocationRequired : 1; unsigned char timeoutForLocationFetch : 1; } _has;
}

@property (nonatomic) char isPreciseLocationRequired;
@property (nonatomic) char hasIsPreciseLocationRequired;
@property (nonatomic) long long timeoutForLocationFetch;
@property (nonatomic) char hasTimeoutForLocationFetch;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPreciseLocationRequired;
- (void)deleteTimeoutForLocationFetch;
- (id)suppressMessageUnderConditions;

@end
