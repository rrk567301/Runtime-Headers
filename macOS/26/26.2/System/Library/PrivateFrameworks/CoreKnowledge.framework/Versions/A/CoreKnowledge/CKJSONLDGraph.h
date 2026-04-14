@class NSArray;

@interface CKJSONLDGraph : NSObject {
    void /* unknown type, empty encoding */ _entities;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, readonly) NSArray *entities;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEntities:(id)a0;
- (void)linkedDataWithCompletionHandler:(id /* block */)a0;

@end
