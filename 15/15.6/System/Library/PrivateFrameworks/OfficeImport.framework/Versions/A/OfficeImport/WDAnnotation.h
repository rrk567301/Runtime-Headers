@class WDAnnotationData, WDCharacterRun;

@interface WDAnnotation : WDRun {
    int mType;
    WDCharacterRun *mReference;
    char mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

@property char isResolved;
@property WDAnnotation *parent;

- (id)description;
- (void).cxx_destruct;
- (id)data;
- (id)date;
- (void)setOwner:(id)a0;
- (id)owner;
- (void)setDate:(id)a0;
- (int)annotationType;
- (id)text;
- (id)reference;
- (unsigned long long)lastParagraphId;
- (int)runType;
- (id)initWithParagraph:(id)a0 type:(int)a1;
- (id)otherEndOfRangedAnnotation;
- (id)paragraphIds;
- (char)referencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(id)a0;
- (void)setReferencePropertiesFixed;
- (void)useDataFromOtherEnd;

@end
