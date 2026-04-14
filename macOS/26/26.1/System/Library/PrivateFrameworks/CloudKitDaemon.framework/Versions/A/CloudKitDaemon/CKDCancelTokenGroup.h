@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (void)cancel;
- (void)removeCancelToken:(id)a0;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;
- (void).cxx_destruct;
- (void)removeAllCancelTokens;
- (id)init;

@end
