@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (int)type;
- (void)setType:(int)a0;
- (void)setWidth:(float)a0;
- (void)setHeight:(float)a0;
- (float)width;
- (float)height;

@end
