@class NSString, NSMutableArray;

@interface BMPBInferredModeEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char confidenceScore : 1; unsigned char uiLocation : 1; unsigned char modeType : 1; unsigned char origin : 1; unsigned char isAutomationEnabled : 1; unsigned char isStart : 1; unsigned char shouldSuggestTriggers : 1; } _has;
}

@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasModeIdentifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (nonatomic) char hasOrigin;
@property (nonatomic) int origin;
@property (readonly, nonatomic) char hasOriginBundleId;
@property (retain, nonatomic) NSString *originBundleId;
@property (nonatomic) char hasIsAutomationEnabled;
@property (nonatomic) char isAutomationEnabled;
@property (nonatomic) char hasIsStart;
@property (nonatomic) char isStart;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasOriginAnchorType;
@property (retain, nonatomic) NSString *originAnchorType;
@property (nonatomic) char hasUiLocation;
@property (nonatomic) unsigned long long uiLocation;
@property (nonatomic) char hasConfidenceScore;
@property (nonatomic) double confidenceScore;
@property (retain, nonatomic) NSMutableArray *serializedTriggers;
@property (nonatomic) char hasModeType;
@property (nonatomic) int modeType;
@property (nonatomic) char hasShouldSuggestTriggers;
@property (nonatomic) char shouldSuggestTriggers;
@property (readonly, nonatomic) char hasUserModeName;
@property (retain, nonatomic) NSString *userModeName;

+ (Class)serializedTriggersType;

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
- (int)StringAsOrigin:(id)a0;
- (id)originAsString:(int)a0;
- (int)StringAsModeType:(id)a0;
- (void)addSerializedTriggers:(id)a0;
- (void)clearSerializedTriggers;
- (id)modeTypeAsString:(int)a0;
- (id)serializedTriggersAtIndex:(unsigned long long)a0;
- (unsigned long long)serializedTriggersCount;

@end
