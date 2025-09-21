@class NSString;

@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying> {
    struct { unsigned char buttonAUpDelay : 1; unsigned char playerIndex : 1; unsigned char profile : 1; unsigned char supportsExtendedMotion : 1; } _has;
}

@property (nonatomic) char hasPlayerIndex;
@property (nonatomic) unsigned int playerIndex;
@property (readonly, nonatomic) char hasVendorName;
@property (retain, nonatomic) NSString *vendorName;
@property (nonatomic) char hasButtonAUpDelay;
@property (nonatomic) int buttonAUpDelay;
@property (nonatomic) char hasProfile;
@property (nonatomic) int profile;
@property (nonatomic) char hasSupportsExtendedMotion;
@property (nonatomic) char supportsExtendedMotion;

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
- (int)StringAsProfile:(id)a0;
- (id)profileAsString:(int)a0;

@end
