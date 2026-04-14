@class NSString, NSMutableArray;

@interface PKProtobufPaymentTokenConfiguration : PBCodable <NSCopying> {
    struct { unsigned char requestMerchantToken : 1; } _has;
}

@property (nonatomic) BOOL hasRequestMerchantToken;
@property (nonatomic) BOOL requestMerchantToken;
@property (readonly, nonatomic) BOOL hasMerchantTokenNotificationURL;
@property (retain, nonatomic) NSString *merchantTokenNotificationURL;
@property (retain, nonatomic) NSMutableArray *multiTokenContexts;
@property (readonly, nonatomic) BOOL hasMerchantTokenManagementURL;
@property (retain, nonatomic) NSString *merchantTokenManagementURL;

+ (Class)multiTokenContextsType;

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
- (void)addMultiTokenContexts:(id)a0;
- (unsigned long long)multiTokenContextsCount;
- (void)clearMultiTokenContexts;
- (id)multiTokenContextsAtIndex:(unsigned long long)a0;

@end
