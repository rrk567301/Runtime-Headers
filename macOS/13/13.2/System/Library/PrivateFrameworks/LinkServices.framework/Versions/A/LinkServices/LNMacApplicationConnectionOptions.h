@interface LNMacApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic, getter=isBackground) BOOL background;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
