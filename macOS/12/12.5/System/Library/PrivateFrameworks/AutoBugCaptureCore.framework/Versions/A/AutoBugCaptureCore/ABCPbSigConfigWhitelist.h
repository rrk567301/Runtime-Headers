@class NSString, NSMutableArray;

@interface ABCPbSigConfigWhitelist : PBCodable <NSCopying> {
    struct { unsigned char globalDecision : 1; } _has;
}

@property (nonatomic) BOOL hasGlobalDecision;
@property (nonatomic) int globalDecision;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSMutableArray *sigConfigs;

+ (Class)sigConfigType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addSigConfig:(id)a0;
- (unsigned long long)sigConfigsCount;
- (void)clearSigConfigs;
- (id)sigConfigAtIndex:(unsigned long long)a0;
- (id)globalDecisionAsString:(int)a0;
- (int)StringAsGlobalDecision:(id)a0;

@end
