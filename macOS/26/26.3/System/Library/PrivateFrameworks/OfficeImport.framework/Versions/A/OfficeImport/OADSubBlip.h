@class NSData;

@interface OADSubBlip : OCDDelayedMedia {
    int mType;
    NSData *mData;
    struct CGSize { double width; double height; } mSizeInPoints;
    int mSizeInBytes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mFrame;
}

- (void)setType:(int)a0;
- (BOOL)isLoaded;
- (int)type;
- (int)sizeInBytes;
- (void)setData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSizeInBytes:(int)a0;
- (struct CGSize { double x0; double x1; })sizeInPoints;
- (id)initWithData:(id)a0 type:(int)a1;
- (void)setSizeInPoints:(struct CGSize { double x0; double x1; })a0;

@end
