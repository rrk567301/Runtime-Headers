@class NSData;

@interface OADSubBlip : OCDDelayedMedia {
    int mType;
    NSData *mData;
    struct CGSize { double width; double height; } mSizeInPoints;
    int mSizeInBytes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mFrame;
}

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (void)setData:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (BOOL)isLoaded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSizeInBytes:(int)a0;
- (int)sizeInBytes;
- (struct CGSize { double x0; double x1; })sizeInPoints;
- (id)initWithData:(id)a0 type:(int)a1;
- (void)setSizeInPoints:(struct CGSize { double x0; double x1; })a0;

@end
