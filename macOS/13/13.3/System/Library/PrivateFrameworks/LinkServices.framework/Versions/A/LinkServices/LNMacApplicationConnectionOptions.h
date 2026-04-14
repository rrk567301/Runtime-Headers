@interface LNMacApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic, getter=isBackground) BOOL background;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
