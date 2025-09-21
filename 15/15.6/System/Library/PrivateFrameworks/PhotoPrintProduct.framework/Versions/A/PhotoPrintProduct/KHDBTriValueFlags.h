@interface KHDBTriValueFlags : NSObject <NSCopying> {
    unsigned int _flagIsSet;
    unsigned int _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(char)a0 forFlag:(unsigned long long)a1;
- (char)valueForFlag:(unsigned long long)a0;
- (char)knowValueForFlag:(unsigned long long)a0;
- (void)setToUnknownForFlag:(unsigned long long)a0;

@end
