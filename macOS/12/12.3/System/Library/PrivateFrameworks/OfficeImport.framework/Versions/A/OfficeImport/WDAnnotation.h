@class WDAnnotationData, WDCharacterRun;

@interface WDAnnotation : WDRun {
    int mType;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

@property BOOL isResolved;
@property WDAnnotation *parent;

- (id)description;
- (id)data;
- (void).cxx_destruct;
- (id)date;
- (void)setOwner:(id)a0;
- (id)owner;
- (void)setDate:(id)a0;
- (id)text;
- (id)reference;
- (int)annotationType;
- (int)runType;
- (BOOL)referencePropertiesFixed;
- (void)setReferencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(id)a0;
- (void)useDataFromOtherEnd;
- (id)otherEndOfRangedAnnotation;
- (id)initWithParagraph:(id)a0 type:(int)a1;
- (id)paragraphIds;
- (unsigned long long)lastParagraphId;

@end
