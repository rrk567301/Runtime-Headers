@interface OADBlipEffect : NSObject <NSCopying> {
    int mType;
}

- (id)initWithType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)type;
- (id)description;
- (void)setStyleColor:(id)a0;

@end
