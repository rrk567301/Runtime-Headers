@class EDString, EDReference;

@interface EDHyperlink : NSObject {
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;

- (id)description;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)path;
- (void)setPath:(id)a0;
- (void)setToolTip:(id)a0;
- (id)toolTip;
- (id)reference;
- (void)setReference:(id)a0;
- (id)descriptionText;
- (void)setDescriptionText:(id)a0;
- (id)dosPath;
- (void)setDosPath:(id)a0;
- (id)textMark;
- (void)setTextMark:(id)a0;

@end
