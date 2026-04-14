@interface OADEffect : NSObject <NSCopying> {
    int mType;
}

- (id)initWithType:(int)a0;
- (int)type;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setStyleColor:(id)a0;

@end
