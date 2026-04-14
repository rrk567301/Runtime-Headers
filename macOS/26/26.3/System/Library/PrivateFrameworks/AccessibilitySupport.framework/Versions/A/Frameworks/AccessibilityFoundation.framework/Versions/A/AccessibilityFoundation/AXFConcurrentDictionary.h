@class NSMutableDictionary, AXFDispatchQueue;

@interface AXFConcurrentDictionary : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_storage;
@property (readonly, nonatomic) AXFDispatchQueue *_queue;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)dictionaryRepresentation;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
