@class CSStingrayRecord, CSFDERecord;

@interface CSStingrayAccountStatus : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStingrayRecord;
@property (retain, nonatomic) CSStingrayRecord *stingrayRecord;
@property (readonly, nonatomic) BOOL hasDbrRecord;
@property (retain, nonatomic) CSStingrayRecord *dbrRecord;
@property (readonly, nonatomic) BOOL hasFdeRecord;
@property (retain, nonatomic) CSFDERecord *fdeRecord;

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
