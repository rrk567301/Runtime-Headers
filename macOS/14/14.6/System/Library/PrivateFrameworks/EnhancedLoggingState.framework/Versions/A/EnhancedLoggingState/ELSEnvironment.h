@interface ELSEnvironment : NSObject

+ (id)sharedEnvironment;

- (unsigned long long)server;
- (void)setServer:(unsigned long long)a0;
- (id)_defaults;

@end
