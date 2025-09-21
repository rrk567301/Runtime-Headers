@class ATXTextMessage, ATXEntityContextRequestOptionalSignals;

@interface ATXMessageContextRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXTextMessage *textMessage;
@property (readonly, nonatomic) ATXEntityContextRequestOptionalSignals *contextRequestSignals;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTextMessage:(id)a0 additionalContextSignals:(id)a1;

@end
