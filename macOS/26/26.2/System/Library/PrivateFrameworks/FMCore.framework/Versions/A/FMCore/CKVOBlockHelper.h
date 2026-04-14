@class NSMutableDictionary;

@interface CKVOBlockHelper : NSObject

@property (readonly, weak, nonatomic) id observedObject;
@property (readonly, nonatomic) NSMutableDictionary *tokensByContext;
@property (nonatomic) long long nextIdentifier;

- (void)dump;
- (void)removeHandlerForKey:(id)a0;
- (id)insertNewTokenForKeyPath:(id)a0 block:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)debugDescription;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)allKVOObservers;
- (void)dealloc;

@end
