@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality;

- (id)initWithPersonality:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
