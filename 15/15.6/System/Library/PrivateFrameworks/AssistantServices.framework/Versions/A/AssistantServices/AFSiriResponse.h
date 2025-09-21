@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding> {
    NSUUID *_requestIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRequest:(id)a0;
- (id)_initWithRequestIdentifier:(id)a0;
- (char)_isForRequest:(id)a0;

@end
