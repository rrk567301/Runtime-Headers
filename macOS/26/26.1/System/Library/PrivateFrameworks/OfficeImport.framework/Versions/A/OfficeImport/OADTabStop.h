@interface OADTabStop : NSObject {
    unsigned char mAlign;
    int mPosition;
}

- (int)position;
- (unsigned long long)hash;
- (void)setPosition:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned char)align;
- (void)setAlign:(unsigned char)a0;

@end
