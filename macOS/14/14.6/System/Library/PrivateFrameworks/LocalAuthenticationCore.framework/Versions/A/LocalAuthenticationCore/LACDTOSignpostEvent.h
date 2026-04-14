@interface LACDTOSignpostEvent : NSObject {
    id /* block */ _sendBlock;
}

@property (class, readonly, nonatomic) LACDTOSignpostEvent *environmentUpdateWillStart;
@property (class, readonly, nonatomic) LACDTOSignpostEvent *environmentUpdateDidFinish;
@property (class, readonly, nonatomic) LACDTOSignpostEvent *locationStatusQueryWillStart;
@property (class, readonly, nonatomic) LACDTOSignpostEvent *locationStatusQueryDidFinish;
@property (class, readonly, nonatomic) LACDTOSignpostEvent *lostModeQueryWillStart;
@property (class, readonly, nonatomic) LACDTOSignpostEvent *lostModeQueryDidFinish;

- (void).cxx_destruct;
- (void)send;
- (void)sendWithMessage:(id)a0;

@end
