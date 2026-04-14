@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (int)unit;
- (void)setFlags:(unsigned int)a0;
- (void)setName:(id)a0;
- (unsigned int)flags;
- (void)setSize:(float)a0;
- (void)setUnit:(int)a0;
- (void).cxx_destruct;
- (id)name;
- (float)size;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
