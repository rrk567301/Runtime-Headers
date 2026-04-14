@class NSMutableArray;

@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}

- (void)addAuthorization:(id)a0 delegate:(id)a1;
- (id)init;
- (void)removeAuthorization:(id)a0;
- (void).cxx_destruct;

@end
