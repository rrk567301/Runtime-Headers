@class SetupSchemaProvisionalSiriSetupEnded, NSData, SetupSchemaProvisionalSiriSetupStep, SetupSchemaProvisionalSiriSetupStarted;

@interface SetupSchemaProvisionalSiriSetupContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStarted *started;
@property (nonatomic) char hasStarted;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStep *step;
@property (nonatomic) char hasStep;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEnded;
- (void)deleteStarted;
- (void)deleteStep;

@end
