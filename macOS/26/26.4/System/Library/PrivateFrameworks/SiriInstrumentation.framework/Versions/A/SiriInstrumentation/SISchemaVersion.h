@class NSString, NSData;

@interface SISchemaVersion : SISchemaInstrumentationMessage {
    struct { unsigned char major : 1; unsigned char minor : 1; unsigned char patch : 1; } _has;
}

@property (nonatomic) unsigned int major;
@property (nonatomic) BOOL hasMajor;
@property (nonatomic) unsigned int minor;
@property (nonatomic) BOOL hasMinor;
@property (nonatomic) unsigned int patch;
@property (nonatomic) BOOL hasPatch;
@property (copy, nonatomic) NSString *prerelease;
@property (nonatomic) BOOL hasPrerelease;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMajor;
- (void)deleteMinor;
- (void)deletePatch;
- (void)deletePrerelease;

@end
