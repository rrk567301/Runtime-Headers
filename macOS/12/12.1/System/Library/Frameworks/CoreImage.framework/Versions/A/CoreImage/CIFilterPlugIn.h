@interface CIFilterPlugIn : CIPlugIn <CIFilterConstructor>

- (id)filterWithName:(id)a0;
- (id)filterWithName:(id)a0 keysAndValues:(id)a1;
- (id)filterWithName:(id)a0 compatibilityVersion:(int)a1 keysAndValues:(id)a2;
- (id)initWithURL:(id)a0 flags:(int)a1;
- (void)registerFilters;
- (id)filterWithName:(id)a0 compatibilityVersion:(int)a1;

@end
