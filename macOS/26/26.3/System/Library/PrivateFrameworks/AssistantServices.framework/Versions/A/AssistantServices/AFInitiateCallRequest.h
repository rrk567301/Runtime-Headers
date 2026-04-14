@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)call;
- (id)createResponse;
- (id)_initWithCall:(id)a0;

@end
