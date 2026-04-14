@interface OADDashStop : NSObject <NSCopying> {
    float mDash;
    float mSpace;
}

+ (void)addStopWithDash:(float)a0 space:(float)a1 toArray:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)space;
- (id)initWithDash:(float)a0 space:(float)a1;
- (float)dash;

@end
