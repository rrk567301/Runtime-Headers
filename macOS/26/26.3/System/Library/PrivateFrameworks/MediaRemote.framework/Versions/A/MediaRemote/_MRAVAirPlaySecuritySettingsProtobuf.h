@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char securityType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) int securityType;

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
- (int)StringAsSecurityType:(id)a0;
- (id)securityTypeAsString:(int)a0;

@end
