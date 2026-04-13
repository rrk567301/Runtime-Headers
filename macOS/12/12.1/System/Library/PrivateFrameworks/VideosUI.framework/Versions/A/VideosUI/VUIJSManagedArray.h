@class NSArray;

@interface VUIJSManagedArray : NSObject

@property (retain, nonatomic) id ownerObject;
@property (retain, nonatomic) NSArray *managedArray;

- (void)dealloc;
- (void).cxx_destruct;
- (id)jsValuesWithContext:(id)a0;
- (id)initWithArray:(id)a0 ownerObject:(id)a1;

@end
