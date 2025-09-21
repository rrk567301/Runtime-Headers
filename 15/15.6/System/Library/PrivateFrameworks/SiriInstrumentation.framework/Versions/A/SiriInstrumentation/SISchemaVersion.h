@class NSString, NSData;

@interface SISchemaVersion : SISchemaInstrumentationMessage {
    struct { unsigned char major : 1; unsigned char minor : 1; unsigned char patch : 1; } _has;
}

@property (nonatomic) unsigned int major;
@property (nonatomic) char hasMajor;
@property (nonatomic) unsigned int minor;
@property (nonatomic) char hasMinor;
@property (nonatomic) unsigned int patch;
@property (nonatomic) char hasPatch;
@property (copy, nonatomic) NSString *prerelease;
@property (nonatomic) char hasPrerelease;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMajor;
- (void)deleteMinor;
- (void)deletePatch;
- (void)deletePrerelease;
- (id)suppressMessageUnderConditions;

@end
