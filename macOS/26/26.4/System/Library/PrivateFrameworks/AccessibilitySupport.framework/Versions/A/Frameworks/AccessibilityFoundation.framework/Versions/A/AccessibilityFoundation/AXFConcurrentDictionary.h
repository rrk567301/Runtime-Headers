@class NSMutableDictionary, AXFDispatchQueue;

@interface AXFConcurrentDictionary : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_storage;
@property (readonly, nonatomic) AXFDispatchQueue *_queue;

- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
