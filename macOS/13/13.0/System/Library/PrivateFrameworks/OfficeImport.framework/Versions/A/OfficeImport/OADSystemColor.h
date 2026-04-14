@interface OADSystemColor : OADColor {
    int mSystemColorID;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemColorID:(int)a0;
- (int)systemColorID;

@end
