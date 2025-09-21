@class NSString;

@interface ATXPBUnifiedInferredActivitySession : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char confidence : 1; unsigned char endTime : 1; unsigned char inferredActivity : 1; unsigned char startTime : 1; } _has;
}

@property (nonatomic) char hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) char hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) char hasInferredActivity;
@property (nonatomic) long long inferredActivity;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;

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
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
