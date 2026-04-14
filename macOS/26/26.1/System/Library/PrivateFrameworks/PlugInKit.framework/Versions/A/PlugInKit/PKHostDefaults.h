@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (BOOL)synchronize;
- (id)objectForKey:(id)a0;
- (void)registerDefaults:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithPlugIn:(id)a0;

@end
