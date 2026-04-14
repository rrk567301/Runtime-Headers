@class NSString;

@interface AEConcretePreferencePrimitives : NSObject <AEPreferencePrimitives> {
    NSString *_domain;
}

- (id)initWithDomain:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
