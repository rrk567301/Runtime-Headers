@class NSString;

@interface PKProtobufPaymentSetupRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasAppName;
@property (retain, nonatomic) NSString *appName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
