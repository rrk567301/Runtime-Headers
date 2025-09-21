@class NSString;

@interface ATXMPBBlendingCaptureRateTracker : PBCodable <NSCopying> {
    struct { unsigned char captureType : 1; unsigned char captured : 1; } _has;
}

@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) char hasCaptured;
@property (nonatomic) char captured;
@property (nonatomic) char hasCaptureType;
@property (nonatomic) int captureType;
@property (readonly, nonatomic) char hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsCaptureType:(id)a0;
- (id)captureTypeAsString:(int)a0;

@end
