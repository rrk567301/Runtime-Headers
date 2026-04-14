@interface OADProperties : NSObject {
    OADProperties *mParent;
    unsigned char mIsMerged : 1;
    unsigned char mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)parent;
- (void)setParent:(id)a0;
- (void)flatten;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (void)p_setParent:(id)a0;
- (BOOL)isMerged;
- (void)setMerged:(BOOL)a0;
- (BOOL)isMergedWithParent;
- (void)setMergedWithParent:(BOOL)a0;
- (id)overrideForSelector:(SEL)a0 mustExist:(BOOL)a1;
- (id)overrideForSelector:(SEL)a0;
- (id)possiblyInexistentOverrideForSelector:(SEL)a0;
- (BOOL)isMergedPropertyForSelector:(SEL)a0;
- (void)changeParentPreservingEffectiveValues:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
