@class NSString, NSData;

@interface NTPBOptInButtonExposure : PBCodable <NSCopying> {
    struct { unsigned char optInButtonLocation : 1; unsigned char optInButtonType : 1; } _has;
}

@property (nonatomic) BOOL hasOptInButtonType;
@property (nonatomic) int optInButtonType;
@property (nonatomic) BOOL hasOptInButtonLocation;
@property (nonatomic) int optInButtonLocation;
@property (readonly, nonatomic) BOOL hasOptInButtonLocationId;
@property (retain, nonatomic) NSString *optInButtonLocationId;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
