@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (void)registerDefaults:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithPlugIn:(id)a0;

@end
