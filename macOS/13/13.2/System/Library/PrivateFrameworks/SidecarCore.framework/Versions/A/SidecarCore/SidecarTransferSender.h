@class NSArray, NSMutableArray;

@interface SidecarTransferSender : SidecarTransfer {
    long long _itemID;
    NSArray *_items;
    NSMutableArray *_slices;
    long long _type;
}

@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0 requestID:(long long)a1 transferID:(long long)a2;
- (id /* block */)_resumeMessage:(id)a0;
- (void)sendItems:(id)a0 messageType:(long long)a1;
- (void)_sendCompletion:(id)a0;

@end
