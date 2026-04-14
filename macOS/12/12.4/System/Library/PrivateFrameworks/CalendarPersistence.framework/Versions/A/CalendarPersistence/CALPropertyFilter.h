@class NSArray;

@interface CALPropertyFilter : CALFilter {
    NSArray *_keys;
    int _mode;
}

+ (id)filterPropertiesNames:(id)a0 withMode:(int)a1;

- (void).cxx_destruct;
- (void)applyTo:(id)a0;
- (id)initWithPropertiesNames:(id)a0 withMode:(int)a1;

@end
