@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest

@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) id completionBlock;
@property (nonatomic) long long estimatedResultCount;

- (void)dealloc;
- (id)description;
- (unsigned long long)requestType;
- (id)initWithFetchRequest:(id)a0 completionBlock:(id /* block */)a1;

@end
