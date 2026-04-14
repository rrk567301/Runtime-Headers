@class NSString, NSMutableArray;

@interface NSPPrivacyProxyTokenAttester : PBCodable <NSCopying> {
    struct { unsigned char authType : 1; } _has;
}

@property (nonatomic) BOOL hasAuthType;
@property (nonatomic) int authType;
@property (retain, nonatomic) NSString *attesterURL;
@property (retain, nonatomic) NSMutableArray *associatedIssuers;

+ (Class)associatedIssuersType;

- (id)authTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (int)StringAsAuthType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addAssociatedIssuers:(id)a0;
- (id)associatedIssuersAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedIssuersCount;
- (void)clearAssociatedIssuers;

@end
