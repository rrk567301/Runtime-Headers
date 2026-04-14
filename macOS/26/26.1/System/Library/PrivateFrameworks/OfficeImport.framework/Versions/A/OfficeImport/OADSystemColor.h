@interface OADSystemColor : OADColor {
    int mSystemColorID;
}

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemColorID:(int)a0;
- (int)systemColorID;

@end
