@class NSString, NSMutableArray;

@interface AWDCaptiveSession : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char autoLoginType : 1; unsigned char durationNetworkNotCaptive : 1; unsigned char durationOnNetwork : 1; unsigned char passiveCaptivityCorrectDetection : 1; unsigned char passiveCaptivityIncorrectDetection : 1; unsigned char passiveCaptivitySymptom : 1; unsigned char redirectURLType : 1; unsigned char result : 1; unsigned char websheetProbeCount : 1; unsigned char websheetScrapeResult : 1; unsigned char whiteListProbeCompletionTime : 1; unsigned char whiteListProbeStatus : 1; unsigned char autoLoginFailed : 1; unsigned char detectedNotCaptiveHandledByCNP : 1; unsigned char handlerCNPTriggeredLogOff : 1; unsigned char isDetectedCaptive : 1; unsigned char nonCaptiveDetectedAsCaptive : 1; unsigned char passiveCaptivityDetected : 1; unsigned char websheetScraped : 1; unsigned char wisprDetected : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasResult;
@property (nonatomic) unsigned int result;
@property (nonatomic) char hasWebsheetProbeCount;
@property (nonatomic) unsigned int websheetProbeCount;
@property (nonatomic) char hasWebsheetScraped;
@property (nonatomic) char websheetScraped;
@property (nonatomic) char hasWebsheetScrapeResult;
@property (nonatomic) unsigned int websheetScrapeResult;
@property (retain, nonatomic) NSMutableArray *installedCNPDisplayIDs;
@property (readonly, nonatomic) char hasHandlerCNP;
@property (retain, nonatomic) NSString *handlerCNP;
@property (nonatomic) char hasDetectedNotCaptiveHandledByCNP;
@property (nonatomic) char detectedNotCaptiveHandledByCNP;
@property (nonatomic) char hasAutoLoginType;
@property (nonatomic) unsigned int autoLoginType;
@property (nonatomic) char hasAutoLoginFailed;
@property (nonatomic) char autoLoginFailed;
@property (readonly, nonatomic) char hasAutoLoginCarrierID;
@property (retain, nonatomic) NSString *autoLoginCarrierID;
@property (nonatomic) char hasWisprDetected;
@property (nonatomic) char wisprDetected;
@property (nonatomic) char hasPassiveCaptivityDetected;
@property (nonatomic) char passiveCaptivityDetected;
@property (nonatomic) char hasPassiveCaptivityCorrectDetection;
@property (nonatomic) unsigned int passiveCaptivityCorrectDetection;
@property (nonatomic) char hasPassiveCaptivityIncorrectDetection;
@property (nonatomic) unsigned int passiveCaptivityIncorrectDetection;
@property (nonatomic) char hasHandlerCNPTriggeredLogOff;
@property (nonatomic) char handlerCNPTriggeredLogOff;
@property (nonatomic) char hasIsDetectedCaptive;
@property (nonatomic) char isDetectedCaptive;
@property (nonatomic) char hasDurationOnNetwork;
@property (nonatomic) unsigned int durationOnNetwork;
@property (nonatomic) char hasDurationNetworkNotCaptive;
@property (nonatomic) unsigned int durationNetworkNotCaptive;
@property (nonatomic) char hasPassiveCaptivitySymptom;
@property (nonatomic) unsigned int passiveCaptivitySymptom;
@property (readonly, nonatomic) char hasAppTriggeredPassiveSymptom;
@property (retain, nonatomic) NSString *appTriggeredPassiveSymptom;
@property (nonatomic) char hasNonCaptiveDetectedAsCaptive;
@property (nonatomic) char nonCaptiveDetectedAsCaptive;
@property (nonatomic) char hasRedirectURLType;
@property (nonatomic) int redirectURLType;
@property (nonatomic) char hasWhiteListProbeStatus;
@property (nonatomic) int whiteListProbeStatus;
@property (nonatomic) char hasWhiteListProbeCompletionTime;
@property (nonatomic) unsigned int whiteListProbeCompletionTime;

+ (Class)installedCNPDisplayIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRedirectURLType:(id)a0;
- (int)StringAsWhiteListProbeStatus:(id)a0;
- (void)addInstalledCNPDisplayIDs:(id)a0;
- (void)clearInstalledCNPDisplayIDs;
- (id)installedCNPDisplayIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)installedCNPDisplayIDsCount;
- (id)redirectURLTypeAsString:(int)a0;
- (id)whiteListProbeStatusAsString:(int)a0;

@end
