@class NSString;

@interface NTPBAdExposureIneligible : PBCodable <NSCopying> {
    struct { unsigned char exposureIneligibleLocationType : 1; unsigned char exposureIneligibleReason : 1; unsigned char feedType : 1; } _has;
}

@property (nonatomic) char hasExposureIneligibleLocationType;
@property (nonatomic) int exposureIneligibleLocationType;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasExposureIneligibleLocationTypeId;
@property (retain, nonatomic) NSString *exposureIneligibleLocationTypeId;
@property (nonatomic) char hasExposureIneligibleReason;
@property (nonatomic) int exposureIneligibleReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
