@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (void)setType:(int)a0;
- (int)type;
- (float)width;
- (id)description;
- (id)init;
- (void)setHeight:(float)a0;
- (float)height;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setWidth:(float)a0;

@end
