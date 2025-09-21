@class NSString, NSMutableArray, CKDPUserAlias;

@interface CKDPUserQueryRequest : PBRequest <NSCopying> {
    struct { unsigned char publicKeyRequested : 1; } _has;
}

@property (readonly, nonatomic) char hasAlias;
@property (retain, nonatomic) CKDPUserAlias *alias;
@property (retain, nonatomic) NSMutableArray *sortedBys;
@property (readonly, nonatomic) char hasOBSOLETEPcsServiceType;
@property (retain, nonatomic) NSString *oBSOLETEPcsServiceType;
@property (nonatomic) char hasPublicKeyRequested;
@property (nonatomic) char publicKeyRequested;

+ (id)options;
+ (Class)sortedByType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addSortedBy:(id)a0;
- (void)clearSortedBys;
- (id)sortedByAtIndex:(unsigned long long)a0;
- (unsigned long long)sortedBysCount;

@end
