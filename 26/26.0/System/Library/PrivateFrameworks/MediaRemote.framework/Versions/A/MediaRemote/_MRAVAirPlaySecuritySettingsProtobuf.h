@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char securityType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) int securityType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsSecurityType:(id)a0;
- (id)securityTypeAsString:(int)a0;

@end
