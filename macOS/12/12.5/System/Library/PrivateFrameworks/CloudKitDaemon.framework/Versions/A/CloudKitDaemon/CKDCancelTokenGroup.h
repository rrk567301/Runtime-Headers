@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)removeAllCancelTokens;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;
- (void)removeCancelToken:(id)a0;

@end
