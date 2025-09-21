@class COMAPPLEPROACTIVEGMSGMSInferenceEvent, NSString, COMAPPLEPROACTIVEGMSGMSAssetEvent, COMAPPLEPROACTIVEGMSGMSGenerativeFunctionEvent, COMAPPLEPROACTIVEGMSGMSError, COMAPPLEPROACTIVEGMSGMSPrewarmEvent;

@interface COMAPPLEPROACTIVEGMSGMSUberEvent : PBCodable <NSCopying> {
    struct { unsigned char threadQualityOfService : 1; unsigned char version : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) char hasTestKey;
@property (retain, nonatomic) NSString *testKey;
@property (readonly, nonatomic) char hasBootSessionUUID;
@property (retain, nonatomic) NSString *bootSessionUUID;
@property (readonly, nonatomic) char hasModelManagerRequestIdentifier;
@property (retain, nonatomic) NSString *modelManagerRequestIdentifier;
@property (readonly, nonatomic) char hasModelManagerSessionIdentifier;
@property (retain, nonatomic) NSString *modelManagerSessionIdentifier;
@property (readonly, nonatomic) char hasInferenceProviderIdentifier;
@property (retain, nonatomic) NSString *inferenceProviderIdentifier;
@property (readonly, nonatomic) char hasUseCaseIdentifier;
@property (retain, nonatomic) NSString *useCaseIdentifier;
@property (readonly, nonatomic) char hasCatalogResourceIdentifier;
@property (retain, nonatomic) NSString *catalogResourceIdentifier;
@property (readonly, nonatomic) char hasClientRequestIdentifier;
@property (retain, nonatomic) NSString *clientRequestIdentifier;
@property (readonly, nonatomic) char hasClientSessionIdentifier;
@property (retain, nonatomic) NSString *clientSessionIdentifier;
@property (nonatomic) char hasThreadQualityOfService;
@property (nonatomic) long long threadQualityOfService;
@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) char hasInferenceEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSInferenceEvent *inferenceEvent;
@property (readonly, nonatomic) char hasAssetEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSAssetEvent *assetEvent;
@property (readonly, nonatomic) char hasGenerativeFunctionEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSGenerativeFunctionEvent *generativeFunctionEvent;
@property (readonly, nonatomic) char hasPrewarmEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSPrewarmEvent *prewarmEvent;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;

@end
