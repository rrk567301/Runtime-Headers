@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (int)unit;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)a0;
- (id)name;
- (void)setUnit:(int)a0;
- (void)setName:(id)a0;
- (void)setSize:(float)a0;
- (void).cxx_destruct;
- (float)size;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
