@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (void)setWidth:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (float)height;
- (unsigned long long)hash;
- (int)type;
- (void)setHeight:(float)a0;
- (id)init;
- (id)description;
- (float)width;

@end
