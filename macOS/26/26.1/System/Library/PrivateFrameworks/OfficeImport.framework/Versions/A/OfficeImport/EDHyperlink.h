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

- (int)type;
- (void)setPath:(id)a0;
- (id)reference;
- (id)path;
- (void)setReference:(id)a0;
- (void)setType:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)toolTip;
- (void)setToolTip:(id)a0;
- (id)descriptionText;
- (void)setDescriptionText:(id)a0;
- (id)dosPath;
- (void)setDosPath:(id)a0;
- (void)setTextMark:(id)a0;
- (id)textMark;

@end
