@class MTSchemaProvisionalMTSessionEnded, MTSchemaProvisionalMTSessionCancelled, NSData, MTSchemaProvisionalMTSessionStarted, MTSchemaProvisionalMTSessionFailed;

@interface MTSchemaProvisionalMTSessionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MTSchemaProvisionalMTSessionStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) MTSchemaProvisionalMTSessionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) MTSchemaProvisionalMTSessionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) MTSchemaProvisionalMTSessionCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
