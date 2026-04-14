@class NSObservableDefaults;

@interface NSEnabledKeys : NSObject

@property (readonly, weak, nonatomic) NSObservableDefaults *observableDefaults;

- (void).cxx_destruct;
- (id)valueForKeyPath:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)initWithDefaults:(id)a0;
- (void)setKey:(id)a0 enabled:(BOOL)a1;
- (BOOL)isKeyEnabled:(id)a0;

@end
