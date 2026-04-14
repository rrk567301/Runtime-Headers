@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (void)setSize:(float)a0;
- (float)size;
- (unsigned int)flags;
- (id)name;
- (void)setUnit:(int)a0;
- (int)unit;
- (void).cxx_destruct;
- (void)setFlags:(unsigned int)a0;
- (void)setName:(id)a0;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
