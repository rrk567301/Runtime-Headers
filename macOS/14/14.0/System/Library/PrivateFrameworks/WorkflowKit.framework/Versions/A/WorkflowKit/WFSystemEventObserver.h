@class NSArray, NSHashTable;

@interface WFSystemEventObserver : NSObject

@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSArray *providers;
@property (readonly, nonatomic) NSHashTable *observers;

- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithProviders:(id)a0;

@end
