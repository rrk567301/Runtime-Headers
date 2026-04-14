@class CKDPListPosition;

@interface CKDPListRange : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLeft;
@property (retain, nonatomic) CKDPListPosition *left;
@property (readonly, nonatomic) BOOL hasRight;
@property (retain, nonatomic) CKDPListPosition *right;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
