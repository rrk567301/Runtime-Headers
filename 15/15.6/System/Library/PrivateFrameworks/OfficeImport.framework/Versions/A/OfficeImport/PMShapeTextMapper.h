@class OADOrientedBounds, CMStyle, OADTextBody;

@interface PMShapeTextMapper : CMMapper {
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    char mRectangular;
}

- (void).cxx_destruct;
- (void)setRectangular:(char)a0;
- (id)initWithOadTextBody:(id)a0 bounds:(id)a1 parent:(id)a2;
- (char)isTableCellContent;
- (void)mapAt:(id)a0 withState:(id)a1;
- (unsigned char)textAnchor;

@end
