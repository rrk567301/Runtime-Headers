@class NSString, NSData;

@interface PKProtobufFlightShareMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasFlightDataString;
@property (retain, nonatomic) NSString *flightDataString;
@property (readonly, nonatomic) BOOL hasLogoImage;
@property (retain, nonatomic) NSData *logoImage;
@property (readonly, nonatomic) BOOL hasForegroundColor;
@property (retain, nonatomic) NSString *foregroundColor;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (retain, nonatomic) NSString *backgroundColor;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
