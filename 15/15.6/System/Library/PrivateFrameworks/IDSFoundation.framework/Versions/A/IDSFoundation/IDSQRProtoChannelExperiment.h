@class NSString;

@interface IDSQRProtoChannelExperiment : PBCodable <NSCopying> {
    struct { unsigned char experimentId : 1; unsigned char int32Value : 1; unsigned char testValue : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) char hasExperimentId;
@property (nonatomic) int experimentId;
@property (readonly, nonatomic) char hasExperimentName;
@property (retain, nonatomic) NSString *experimentName;
@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasInt32Value;
@property (nonatomic) int int32Value;
@property (nonatomic) char hasTestValue;
@property (nonatomic) int testValue;

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
- (int)StringAsExperimentId:(id)a0;
- (int)StringAsTestValue:(id)a0;
- (void)clearOneofValuesForTestValue;
- (id)experimentIdAsString:(int)a0;
- (id)testValueAsString:(int)a0;

@end
