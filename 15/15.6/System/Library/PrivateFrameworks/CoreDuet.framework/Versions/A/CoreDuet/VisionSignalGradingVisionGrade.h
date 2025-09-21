@class NSString, NSMutableArray;

@interface VisionSignalGradingVisionGrade : PBCodable <NSCopying> {
    struct { unsigned char childAge : 1; unsigned char numPeople : 1; unsigned char cameraRollGrade : 1; unsigned char childGrade : 1; unsigned char extractedGrade : 1; unsigned char imageGrade : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasImageGrade;
@property (nonatomic) char imageGrade;
@property (nonatomic) char hasNumPeople;
@property (nonatomic) int numPeople;
@property (nonatomic) char hasCameraRollGrade;
@property (nonatomic) char cameraRollGrade;
@property (retain, nonatomic) NSMutableArray *extractedSignals;
@property (nonatomic) char hasExtractedGrade;
@property (nonatomic) char extractedGrade;
@property (nonatomic) char hasChildGrade;
@property (nonatomic) char childGrade;
@property (nonatomic) char hasChildAge;
@property (nonatomic) int childAge;

+ (Class)extractedSignalsType;

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
- (void)addExtractedSignals:(id)a0;
- (void)clearExtractedSignals;
- (id)extractedSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)extractedSignalsCount;

@end
