@class NSData, NSString;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {
    struct { unsigned char apnsEnv : 1; unsigned char skipBundleIDCheck : 1; } _has;
}

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSData *token;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) char hasApnsEnv;
@property (nonatomic) int apnsEnv;
@property (nonatomic) char hasSkipBundleIDCheck;
@property (nonatomic) char skipBundleIDCheck;

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
- (int)StringAsApnsEnv:(id)a0;
- (id)apnsEnvAsString:(int)a0;

@end
