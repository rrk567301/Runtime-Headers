@interface _NSMenuCacheEntry : NSObject

@property (nonatomic, weak) void /* function */ menu;
@property (nonatomic) long long item;
@property (nonatomic) unsigned int context;
@property (nonatomic) unsigned int eventModifiers;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMenu:(id)a0 item:(long long)a1 context:(unsigned int)a2 eventModifiers:(unsigned int)a3;

@end
