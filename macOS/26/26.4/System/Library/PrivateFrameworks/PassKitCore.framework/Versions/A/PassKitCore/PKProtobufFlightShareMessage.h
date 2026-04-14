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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
