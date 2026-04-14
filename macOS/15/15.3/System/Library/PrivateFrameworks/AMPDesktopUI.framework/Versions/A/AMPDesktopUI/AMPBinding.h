@class NSString, NSObject;

@interface AMPBinding : NSObject

@property (weak, nonatomic) NSObject *target;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) NSString *keyPath;

+ (id)bindingForTarget:(id)a0 property:(id)a1 source:(id)a2 keyPath:(id)a3;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
