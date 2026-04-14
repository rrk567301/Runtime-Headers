@interface RBSCoalitionLevelGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long coalitionLevel;

+ (id)grantWithCoalitionLevel:(unsigned long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;

@end
