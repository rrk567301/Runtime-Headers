@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (int)type;
- (void)setWidth:(float)a0;
- (unsigned long long)hash;
- (void)setType:(int)a0;
- (id)description;
- (void)setHeight:(float)a0;
- (float)height;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)width;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
