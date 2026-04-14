@interface OADBlipEffect : NSObject <NSCopying> {
    int mType;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (id)initWithType:(int)a0;
- (void)setStyleColor:(id)a0;

@end
