@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (void)setType:(int)a0;
- (float)height;
- (float)width;
- (void)setHeight:(float)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWidth:(float)a0;
- (int)type;
- (id)description;
- (id)init;

@end
