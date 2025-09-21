@class NSData;

@interface HALSchemaHALNearbyPersonalDevicesReported : SISchemaInstrumentationMessage {
    struct { unsigned char iPhoneCount : 1; unsigned char iPadCount : 1; unsigned char watchCount : 1; unsigned char macBookCount : 1; unsigned char macStudioCount : 1; unsigned char iMacCount : 1; } _has;
}

@property (nonatomic) unsigned int iPhoneCount;
@property (nonatomic) char hasIPhoneCount;
@property (nonatomic) unsigned int iPadCount;
@property (nonatomic) char hasIPadCount;
@property (nonatomic) unsigned int watchCount;
@property (nonatomic) char hasWatchCount;
@property (nonatomic) unsigned int macBookCount;
@property (nonatomic) char hasMacBookCount;
@property (nonatomic) unsigned int macStudioCount;
@property (nonatomic) char hasMacStudioCount;
@property (nonatomic) unsigned int iMacCount;
@property (nonatomic) char hasIMacCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIMacCount;
- (void)deleteIPadCount;
- (void)deleteIPhoneCount;
- (void)deleteMacBookCount;
- (void)deleteMacStudioCount;
- (void)deleteWatchCount;
- (id)suppressMessageUnderConditions;

@end
