@class NSString;

@interface AVOutputDeviceScreenBorrowToken : NSObject {
    struct OpaqueFigEndpoint { } *_endpoint;
}

@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *reason;

- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:(struct OpaqueFigEndpoint { } *)a0 client:(id)a1 reason:(id)a2;

@end
