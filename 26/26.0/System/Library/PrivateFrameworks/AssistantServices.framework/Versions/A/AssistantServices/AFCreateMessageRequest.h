@class STSiriMessage;

@interface AFCreateMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithMessage:(id)a0;
- (id)createResponseWithMessageIdentifier:(id)a0;

@end
