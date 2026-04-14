@class NSString, NSXPCConnection;

@interface EXSEWSGetAttachmentRequestXPCCallbackInfo : NSObject

@property (weak, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *requestID;

- (void).cxx_destruct;

@end
