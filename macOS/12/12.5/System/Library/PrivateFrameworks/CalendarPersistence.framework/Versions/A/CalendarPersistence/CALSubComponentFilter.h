@class NSArray;

@interface CALSubComponentFilter : CALFilter {
    NSArray *_classes;
    int _mode;
}

+ (id)filterSubComponentsWithClasses:(id)a0 withMode:(int)a1;

- (void).cxx_destruct;
- (void)applyTo:(id)a0;
- (id)initWithSubComponentsWithClasses:(id)a0 withMode:(int)a1;

@end
