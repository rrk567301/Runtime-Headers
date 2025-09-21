@class NSString, NSData;

@interface NTPBOptInButtonExposure : PBCodable <NSCopying> {
    struct { unsigned char optInButtonLocation : 1; unsigned char optInButtonType : 1; } _has;
}

@property (nonatomic) char hasOptInButtonType;
@property (nonatomic) int optInButtonType;
@property (nonatomic) char hasOptInButtonLocation;
@property (nonatomic) int optInButtonLocation;
@property (readonly, nonatomic) char hasOptInButtonLocationId;
@property (retain, nonatomic) NSString *optInButtonLocationId;
@property (readonly, nonatomic) char hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
