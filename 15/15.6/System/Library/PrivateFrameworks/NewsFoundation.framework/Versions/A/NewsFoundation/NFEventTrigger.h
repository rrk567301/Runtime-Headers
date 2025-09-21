@class NSString, NSSet;

@interface NFEventTrigger : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSSet *events;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) char fireOnce;
@property (readonly, nonatomic) char fireOnAny;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 fireOnce:(char)a1 fireOnAny:(char)a2 events:(id)a3 block:(id /* block */)a4;

@end
