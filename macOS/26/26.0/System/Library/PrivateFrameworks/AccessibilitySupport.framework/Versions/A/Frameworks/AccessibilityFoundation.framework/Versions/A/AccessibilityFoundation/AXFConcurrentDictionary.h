@class NSMutableDictionary, AXFDispatchQueue;

@interface AXFConcurrentDictionary : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_storage;
@property (readonly, nonatomic) AXFDispatchQueue *_queue;

- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
