@class EDResources, CHDDataValuesCollection, CHDFormula;

@interface CHDData : NSObject {
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    unsigned long long mContentFormatId;
    unsigned long long mDataValueIndexCount;
    EDResources *mResources;
}

+ (id)dataWithResources:(id)a0;
+ (id)dataWithDataPointCount:(unsigned long long)a0 resources:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithResources:(id)a0;
- (id)initWithDataPointCount:(unsigned long long)a0 resources:(id)a1;
- (id)dataValues;
- (unsigned long long)dataValueIndexCount;
- (void)setDataValueIndexCount:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })minMaxValues;
- (unsigned long long)averageDataPointDecimalCount;
- (void)setFormula:(id)a0 chart:(id)a1;
- (id)firstValueContentFormatWithWorkbook:(id)a0;
- (id)contentFormat;
- (void)setContentFormat:(id)a0;
- (unsigned long long)contentFormatId;
- (void)setContentFormatId:(unsigned long long)a0;
- (id)formula;
- (unsigned long long)countOfCellsBeingReferenced;

@end
