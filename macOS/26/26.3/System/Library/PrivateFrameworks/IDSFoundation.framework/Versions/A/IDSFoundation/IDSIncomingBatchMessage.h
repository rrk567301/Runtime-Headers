@class NSString, NSArray, IDSIncomingBatchMessageContext;

@interface IDSIncomingBatchMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *service;
@property (retain, nonatomic) NSArray *messages;
@property (readonly, nonatomic) unsigned long long messagesCount;
@property (readonly, nonatomic) IDSIncomingBatchMessageContext *context;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMessages:(id)a0 service:(id)a1 context:(id)a2;

@end
