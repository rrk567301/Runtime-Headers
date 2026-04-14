@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (void)setSize:(float)a0;
- (void)setFlags:(unsigned int)a0;
- (void)setName:(id)a0;
- (int)unit;
- (void)setUnit:(int)a0;
- (unsigned int)flags;
- (id)name;
- (float)size;
- (void).cxx_destruct;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
