@class NSString, NSMutableArray;

@interface NSPPrivacyProxyTokenAttester : PBCodable <NSCopying> {
    struct { unsigned char authType : 1; } _has;
}

@property (nonatomic) BOOL hasAuthType;
@property (nonatomic) int authType;
@property (retain, nonatomic) NSString *attesterURL;
@property (retain, nonatomic) NSMutableArray *associatedIssuers;

+ (Class)associatedIssuersType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)StringAsAuthType:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)authTypeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAssociatedIssuers:(id)a0;
- (id)associatedIssuersAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedIssuersCount;
- (void)clearAssociatedIssuers;

@end
