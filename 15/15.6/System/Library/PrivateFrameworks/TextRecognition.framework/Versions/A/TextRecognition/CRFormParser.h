@class CRFormContentTypePredictor;

@interface CRFormParser : NSObject {
    CRFormContentTypePredictor *_predictor;
}

+ (id)_orderedGroupsWithFields:(id)a0 lines:(id)a1;
+ (id)_dominantLocaleInRegions:(id)a0;
+ (id)_groupSegmentedFieldsInAlignedFields:(id)a0;
+ (id)_groupSegmentedFieldsInFields:(id)a0;
+ (char)_isRegion:(id)a0 segmentedBoxLeftOfRegion:(id)a1 withTolerance:(double)a2 modalWidth:(double)a3 modelGap:(double)a4;
+ (id)_mergedFieldsWithUnifiedQuadsFromFields:(id)a0 needsFieldReplacement:(char *)a1 originalField:(id)a2 replacementField:(id)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfFirstSegmentedFieldGroupInFields:(id)a0 startIndex:(long long)a1 modalWidth:(double)a2 modelGap:(double)a3;
+ (id)_restoredFieldsWithFields:(id)a0 originalField:(id)a1 replacementField:(id)a2;
+ (void)_setPrecedingExternalFieldsForFields:(id)a0;
+ (id)_textFieldsAndRegionsFrom:(id)a0;
+ (id)convertDetectedFields:(id)a0;
+ (double)globalLineHeightInDocument:(id)a0;
+ (id)horizontalClustersFromFields:(id)a0;
+ (id)predictLineHeightForFields:(id)a0 inDocument:(id)a1 shouldUpdateExternalFields:(char)a2;

- (id)init;
- (void).cxx_destruct;
- (char)_localeIsEnabled:(id)a0;
- (id)_orderAndGroupLinesInDocument:(id)a0 allFields:(id)a1 regions:(id)a2;
- (void)_parseFieldsWithLabelFinderAndKeywords:(id)a0 fieldsAndRegions:(id)a1 updateExternal:(char)a2 locale:(id)a3;
- (void)_parseFieldsWithTransformer:(id)a0 fieldsAndRegions:(id)a1 updateExternal:(char)a2 locale:(id)a3;
- (id)parseFieldsInDocument:(id)a0 allFields:(id)a1 shouldUpdateExternalFields:(char)a2;

@end
