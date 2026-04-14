@class NSData;

@interface IFTSchemaIFTSystemRequirementUserLocationForSystemRequest : SISchemaInstrumentationMessage {
    struct { unsigned char isPreciseLocationRequired : 1; unsigned char timeoutForLocationFetch : 1; } _has;
}

@property (nonatomic) BOOL isPreciseLocationRequired;
@property (nonatomic) BOOL hasIsPreciseLocationRequired;
@property (nonatomic) long long timeoutForLocationFetch;
@property (nonatomic) BOOL hasTimeoutForLocationFetch;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPreciseLocationRequired;
- (void)deleteTimeoutForLocationFetch;

@end
