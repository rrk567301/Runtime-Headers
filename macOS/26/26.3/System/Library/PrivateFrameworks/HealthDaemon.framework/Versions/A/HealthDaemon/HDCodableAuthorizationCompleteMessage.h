@class NSString, NSData;

@interface HDCodableAuthorizationCompleteMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
