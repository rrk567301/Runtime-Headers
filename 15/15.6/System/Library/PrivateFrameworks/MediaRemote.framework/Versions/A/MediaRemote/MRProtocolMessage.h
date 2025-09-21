@class NSString, MRProtocolClientConnection, NSData, PBCodable, NSError, MRProtocolMessageOptions;

@interface MRProtocolMessage : NSObject {
    NSData *_protobufData;
    char _replied;
}

@property (retain, nonatomic) PBCodable *underlyingCodableMessage;
@property (copy, nonatomic) NSString *replyIdentifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSError *error;
@property (weak, nonatomic) MRProtocolClientConnection *clientConnection;
@property (nonatomic) char isIncomingReply;
@property (nonatomic) char isOutgoingReply;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) unsigned long long encryptionType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) char shouldLog;
@property (readonly, nonatomic) char shouldVerboselyLog;
@property (retain, nonatomic) MRProtocolMessageOptions *transportOptions;

+ (unsigned long long)currentProtocolVersion;
+ (id)protocolMessageWithProtobufData:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)reply;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (char)replyWithMessage:(id)a0;

@end
