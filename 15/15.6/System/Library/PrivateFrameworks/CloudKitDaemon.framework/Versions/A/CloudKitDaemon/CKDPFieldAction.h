@class CKDPFieldActionReplaceListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionDeleteListRange;

@interface CKDPFieldAction : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasInsertIntoList;
@property (retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList;
@property (readonly, nonatomic) char hasDeleteListRange;
@property (retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange;
@property (readonly, nonatomic) char hasReplaceListRange;
@property (retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange;

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
