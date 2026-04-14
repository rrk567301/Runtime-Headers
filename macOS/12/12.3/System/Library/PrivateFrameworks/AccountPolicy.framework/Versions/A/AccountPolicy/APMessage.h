@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object, OS_os_log;

@interface APMessage : NSObject

@property (readonly, copy) NSObject<OS_xpc_object> *receivedXPCMessage;
@property (readonly) int messageType;
@property (readonly) NSString *messageTypeString;
@property (readonly) NSDictionary *messageData;
@property (readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) int resultCode;

+ (id)stringForResult:(int)a0;
+ (id)messageWithReceivedXPCMessage:(id)a0;
+ (id)stringForMessageType:(int)a0;
+ (id)messageWithType:(int)a0 data:(id)a1 receivedXPCMessage:(id)a2;
+ (id)outgoingMessageWithType:(int)a0 andData:(id)a1;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)xpcMessage;
- (id)initOutgoingMessageWithType:(int)a0 andData:(id)a1;
- (void)updateMessageDataWithEntriesFromDictionary:(id)a0;
- (id)replyWithData:(id)a0;
- (id)sendToHelperAndReturnResponse;
- (id)replyWithErrorCode:(long long)a0 andFailureReason:(id)a1;
- (id)initWithType:(int)a0 data:(id)a1 receivedXPCMessage:(id)a2;
- (id)initWithReceivedXPCMessage:(id)a0;
- (id)replyWithErrorCode:(long long)a0 andFormat:(id)a1;
- (id)sendWithReplyOnConnectionSync:(id)a0 error:(id *)a1;
- (id)replyWithError:(id)a0;
- (id)replyWithSuccess;
- (void)sendOnConnection:(id)a0;
- (void)sendWithReplyOnConnection:(id)a0 replyQueue:(id)a1 replyHandler:(id /* block */)a2;

@end
