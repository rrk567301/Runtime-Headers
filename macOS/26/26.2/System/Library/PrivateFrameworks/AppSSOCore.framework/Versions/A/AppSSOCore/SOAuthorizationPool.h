@class NSMutableArray;

@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}

- (void).cxx_destruct;
- (void)addAuthorization:(id)a0 delegate:(id)a1;
- (id)init;
- (void)removeAuthorization:(id)a0;

@end
