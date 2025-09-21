@class NSString, NSData;

@interface SISchemaCarPlayInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char directAction : 1; unsigned char enhancedVoiceTriggerMode : 1; unsigned char carPlayConnection : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) char hasBundleID;
@property (nonatomic) int directAction;
@property (nonatomic) char hasDirectAction;
@property (nonatomic) int enhancedVoiceTriggerMode;
@property (nonatomic) char hasEnhancedVoiceTriggerMode;
@property (nonatomic) int carPlayConnection;
@property (nonatomic) char hasCarPlayConnection;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBundleID;
- (void)deleteCarPlayConnection;
- (void)deleteDirectAction;
- (void)deleteEnhancedVoiceTriggerMode;
- (id)suppressMessageUnderConditions;

@end
