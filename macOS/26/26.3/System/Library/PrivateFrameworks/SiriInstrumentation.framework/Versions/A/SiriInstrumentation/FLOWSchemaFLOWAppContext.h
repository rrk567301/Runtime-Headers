@class NSString, NSData;

@interface FLOWSchemaFLOWAppContext : SISchemaInstrumentationMessage {
    struct { unsigned char isSmartEnoughAppSelectionUsed : 1; unsigned char appResolutionType : 1; unsigned char protectedAppType : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL hasAppVersion;
@property (nonatomic) BOOL isSmartEnoughAppSelectionUsed;
@property (nonatomic) BOOL hasIsSmartEnoughAppSelectionUsed;
@property (nonatomic) int appResolutionType;
@property (nonatomic) BOOL hasAppResolutionType;
@property (nonatomic) int protectedAppType;
@property (nonatomic) BOOL hasProtectedAppType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAppResolutionType;
- (void)deleteAppVersion;
- (void)deleteBundleId;
- (void)deleteIsSmartEnoughAppSelectionUsed;
- (void)deleteProtectedAppType;

@end
