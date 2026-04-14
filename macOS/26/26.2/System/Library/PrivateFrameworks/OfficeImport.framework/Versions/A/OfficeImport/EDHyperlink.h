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

- (id)reference;
- (void)setReference:(id)a0;
- (void)setType:(int)a0;
- (void)setPath:(id)a0;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)path;
- (id)toolTip;
- (void)setToolTip:(id)a0;
- (id)descriptionText;
- (void)setDescriptionText:(id)a0;
- (id)dosPath;
- (void)setDosPath:(id)a0;
- (void)setTextMark:(id)a0;
- (id)textMark;

@end
