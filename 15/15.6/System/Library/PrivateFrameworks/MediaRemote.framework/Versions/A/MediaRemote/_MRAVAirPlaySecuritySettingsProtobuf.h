@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char securityType : 1; } _has;
}

@property (readonly, nonatomic) char hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) char hasSecurityType;
@property (nonatomic) int securityType;

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
- (int)StringAsSecurityType:(id)a0;
- (id)securityTypeAsString:(int)a0;

@end
