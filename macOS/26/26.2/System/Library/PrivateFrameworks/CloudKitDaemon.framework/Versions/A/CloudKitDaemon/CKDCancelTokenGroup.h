@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (void)cancel;
- (void)removeAllCancelTokens;
- (void).cxx_destruct;
- (void)removeCancelToken:(id)a0;
- (id)init;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;

@end
