@class NSData;

@interface FLOWSchemaFLOWProfileSwitchContext : SISchemaInstrumentationMessage {
    struct { unsigned char profileSwitchMethod : 1; unsigned char profileSwitchByNameType : 1; unsigned char profileSwitchOutcome : 1; unsigned char profileSwitchFailureReason : 1; unsigned char profileSwitchDurationInMs : 1; } _has;
}

@property (nonatomic) int profileSwitchMethod;
@property (nonatomic) char hasProfileSwitchMethod;
@property (nonatomic) int profileSwitchByNameType;
@property (nonatomic) char hasProfileSwitchByNameType;
@property (nonatomic) int profileSwitchOutcome;
@property (nonatomic) char hasProfileSwitchOutcome;
@property (nonatomic) int profileSwitchFailureReason;
@property (nonatomic) char hasProfileSwitchFailureReason;
@property (nonatomic) unsigned int profileSwitchDurationInMs;
@property (nonatomic) char hasProfileSwitchDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProfileSwitchDurationInMs;
- (void)deleteProfileSwitchByNameType;
- (void)deleteProfileSwitchFailureReason;
- (void)deleteProfileSwitchMethod;
- (void)deleteProfileSwitchOutcome;
- (id)suppressMessageUnderConditions;

@end
