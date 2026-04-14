@interface OADEffect : NSObject <NSCopying> {
    int mType;
}

- (unsigned long long)hash;
- (id)initWithType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (id)description;
- (void)setStyleColor:(id)a0;

@end
