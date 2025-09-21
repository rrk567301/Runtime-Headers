@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;

- (id)call;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;
- (id)_initWithCall:(id)a0;

@end
