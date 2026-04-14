@class NSString;

@interface AEConcretePreferencePrimitives : NSObject <AEPreferencePrimitives> {
    NSString *_domain;
}

- (void).cxx_destruct;
- (id)boolForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void)setBool:(id)a0 forKey:(id)a1;
- (void)setNumber:(id)a0 forKey:(id)a1;

@end
