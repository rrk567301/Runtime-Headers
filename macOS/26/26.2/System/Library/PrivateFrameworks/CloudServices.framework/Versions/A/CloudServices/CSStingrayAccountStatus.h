@class CSStingrayRecord, CSFDERecord;

@interface CSStingrayAccountStatus : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStingrayRecord;
@property (retain, nonatomic) CSStingrayRecord *stingrayRecord;
@property (readonly, nonatomic) BOOL hasGfRecord;
@property (retain, nonatomic) CSStingrayRecord *gfRecord;
@property (readonly, nonatomic) BOOL hasDbrRecord;
@property (retain, nonatomic) CSStingrayRecord *dbrRecord;
@property (readonly, nonatomic) BOOL hasFdeRecord;
@property (retain, nonatomic) CSFDERecord *fdeRecord;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
