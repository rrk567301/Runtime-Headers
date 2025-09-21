@class NSURL;

@interface AFObjectUpdatedSiriResponse : AFSiriResponse {
    NSURL *_objectIdentifier;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRequest:(id)a0 objectIdentifier:(id)a1;
- (id)_objectIdentifier;

@end
