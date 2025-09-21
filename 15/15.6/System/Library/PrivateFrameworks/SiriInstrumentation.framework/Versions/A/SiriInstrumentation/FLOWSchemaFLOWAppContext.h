@class NSString, NSData;

@interface FLOWSchemaFLOWAppContext : SISchemaInstrumentationMessage {
    struct { unsigned char isSmartEnoughAppSelectionUsed : 1; unsigned char appResolutionType : 1; unsigned char protectedAppType : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) char hasAppVersion;
@property (nonatomic) char isSmartEnoughAppSelectionUsed;
@property (nonatomic) char hasIsSmartEnoughAppSelectionUsed;
@property (nonatomic) int appResolutionType;
@property (nonatomic) char hasAppResolutionType;
@property (nonatomic) int protectedAppType;
@property (nonatomic) char hasProtectedAppType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppResolutionType;
- (void)deleteAppVersion;
- (void)deleteBundleId;
- (void)deleteIsSmartEnoughAppSelectionUsed;
- (void)deleteProtectedAppType;
- (id)suppressMessageUnderConditions;

@end
