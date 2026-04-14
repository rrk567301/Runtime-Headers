@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (void)registerDefaults:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)initWithPlugIn:(id)a0;

@end
