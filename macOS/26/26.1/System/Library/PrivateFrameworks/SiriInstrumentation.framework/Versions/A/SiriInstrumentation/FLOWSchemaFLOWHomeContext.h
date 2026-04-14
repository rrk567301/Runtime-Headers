@class NSData;

@interface FLOWSchemaFLOWHomeContext : SISchemaInstrumentationMessage {
    struct { unsigned char homeCount : 1; unsigned char homePodCount : 1; unsigned char appleTvCount : 1; unsigned char hasCurrentHome : 1; } _has;
}

@property (nonatomic) unsigned int homeCount;
@property (nonatomic) BOOL hasHomeCount;
@property (nonatomic) unsigned int homePodCount;
@property (nonatomic) BOOL hasHomePodCount;
@property (nonatomic) unsigned int appleTvCount;
@property (nonatomic) BOOL hasAppleTvCount;
@property (nonatomic) BOOL hasCurrentHome;
@property (nonatomic) BOOL hasHasCurrentHome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteHomeCount;
- (void)deleteAppleTvCount;
- (void)deleteHasCurrentHome;
- (void)deleteHomePodCount;

@end
