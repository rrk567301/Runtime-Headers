@interface OADBlipEffect : NSObject <NSCopying> {
    int mType;
}

- (int)type;
- (unsigned long long)hash;
- (id)initWithType:(int)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setStyleColor:(id)a0;

@end
