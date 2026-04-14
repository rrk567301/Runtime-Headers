@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {
    NSMapTable *_middlewareOperationMap;
    NSMutableArray *_middleware;
    NSMutableArray *_operations;
}

+ (id)mapForRequest:(id)a0;

- (id)_init;
- (id)allOperations;
- (void).cxx_destruct;
- (id)allMiddleware;
- (id)operationsForMiddleware:(id)a0;

@end
