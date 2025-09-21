@class IMLocalObject, NSObject;
@protocol OS_xpc_object, OS_voucher;

@interface IMMessageContext : NSObject {
    char _boost;
}

@property (retain) IMLocalObject *localObject;
@property (retain) id context;
@property char shouldBoost;
@property (nonatomic) char sync;
@property (nonatomic) char reply;
@property (nonatomic) char needReply;
@property (retain) NSObject<OS_xpc_object> *xpcMessage;
@property (retain) NSObject<OS_voucher> *voucher;

- (id)init;
- (void).cxx_destruct;
- (char)isReply;
- (char)isSync;

@end
