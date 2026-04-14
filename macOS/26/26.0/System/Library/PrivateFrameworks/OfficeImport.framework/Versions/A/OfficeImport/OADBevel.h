@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (void)setWidth:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (float)width;
- (id)init;
- (void)setType:(int)a0;
- (id)description;
- (void)setHeight:(float)a0;
- (float)height;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
