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
+ (id)messageWithType:(int)a0 data:(id)a1 receivedXPCMessage:(id)a2;
+ (id)outgoingMessageWithType:(int)a0 andData:(id)a1;
+ (id)stringForMessageType:(int)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)xpcMessage;
- (id)replyWithError:(id)a0;
- (id)initOutgoingMessageWithType:(int)a0 andData:(id)a1;
- (id)initWithReceivedXPCMessage:(id)a0;
- (id)initWithType:(int)a0 data:(id)a1 receivedXPCMessage:(id)a2;
- (id)replyWithData:(id)a0;
- (id)replyWithErrorCode:(long long)a0 andFailureReason:(id)a1;
- (id)replyWithErrorCode:(long long)a0 andFormat:(id)a1;
- (id)replyWithSuccess;
- (void)sendOnConnection:(id)a0;
- (id)sendToHelperAndReturnResponse;
- (void)sendWithReplyOnConnection:(id)a0 replyQueue:(id)a1 replyHandler:(id /* block */)a2;
- (id)sendWithReplyOnConnectionSync:(id)a0 error:(id *)a1;
- (void)updateMessageDataWithEntriesFromDictionary:(id)a0;

@end
