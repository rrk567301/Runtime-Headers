@interface OADBlipEffect : NSObject <NSCopying> {
    int mType;
}

- (id)initWithType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setStyleColor:(id)a0;

@end
