@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (id)initWithPlugIn:(id)a0;

@end
