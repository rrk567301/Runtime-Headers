@class NSURL;

@interface AFObjectUpdatedSiriResponse : AFSiriResponse {
    NSURL *_objectIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithRequest:(id)a0 objectIdentifier:(id)a1;
- (id)_objectIdentifier;

@end
