@class NSArray;

@interface SidecarSubmenu : NSMenu {
    long long _generation;
    unsigned long long _options;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (copy, nonatomic) NSArray *services;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)update;
- (void).cxx_destruct;

@end
