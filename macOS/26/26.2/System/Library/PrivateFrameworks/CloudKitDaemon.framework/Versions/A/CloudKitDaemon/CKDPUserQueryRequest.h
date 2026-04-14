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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (void)addSortedBy:(id)a0;
- (void)clearSortedBys;
- (id)sortedByAtIndex:(unsigned long long)a0;
- (unsigned long long)sortedBysCount;

@end
