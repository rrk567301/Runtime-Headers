@class CSLRCFedRecord, CSFallbackStingrayRecord, CSStingrayRecord, CSLRCRecord, CSFDERecord;

@interface CSStingrayAccountStatus : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStingrayRecord;
@property (retain, nonatomic) CSStingrayRecord *stingrayRecord;
@property (readonly, nonatomic) BOOL hasDbrRecord;
@property (retain, nonatomic) CSStingrayRecord *dbrRecord;
@property (readonly, nonatomic) BOOL hasFdeRecord;
@property (retain, nonatomic) CSFDERecord *fdeRecord;
@property (readonly, nonatomic) BOOL hasFallbackRecord;
@property (retain, nonatomic) CSFallbackStingrayRecord *fallbackRecord;
@property (readonly, nonatomic) BOOL hasLrcFedRecord;
@property (retain, nonatomic) CSLRCFedRecord *lrcFedRecord;
@property (readonly, nonatomic) BOOL hasLrcRecord;
@property (retain, nonatomic) CSLRCRecord *lrcRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
