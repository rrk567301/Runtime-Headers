@class NSString;

@interface PPM2TopicDonationError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; unsigned char reason : 1; unsigned char source : 1; } _has;
}

@property (nonatomic) char hasReason;
@property (nonatomic) int reason;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasCode;
@property (nonatomic) long long code;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsReason:(id)a0;
- (id)reasonAsString:(int)a0;
- (int)StringAsSource:(id)a0;

@end
