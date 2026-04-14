@class NSString, NSMutableArray, CKDPUserAlias;

@interface CKDPUserQueryRequest : PBRequest <NSCopying> {
    struct { unsigned char publicKeyRequested : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAlias;
@property (retain, nonatomic) CKDPUserAlias *alias;
@property (retain, nonatomic) NSMutableArray *sortedBys;
@property (readonly, nonatomic) BOOL hasOBSOLETEPcsServiceType;
@property (retain, nonatomic) NSString *oBSOLETEPcsServiceType;
@property (nonatomic) BOOL hasPublicKeyRequested;
@property (nonatomic) BOOL publicKeyRequested;

+ (id)options;
+ (Class)sortedByType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)clearSortedBys;
- (void)addSortedBy:(id)a0;
- (unsigned long long)sortedBysCount;
- (id)sortedByAtIndex:(unsigned long long)a0;

@end
