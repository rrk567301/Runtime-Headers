@class NSObservableDefaults;

@interface NSEnabledKeys : NSObject

@property (readonly, weak, nonatomic) NSObservableDefaults *observableDefaults;

- (id)valueForUndefinedKey:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaults:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setKey:(id)a0 enabled:(BOOL)a1;
- (BOOL)isKeyEnabled:(id)a0;

@end
