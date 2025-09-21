@class NSString, NSData;

@interface HDCodableAuthorizationCompleteMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) char hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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

@end
