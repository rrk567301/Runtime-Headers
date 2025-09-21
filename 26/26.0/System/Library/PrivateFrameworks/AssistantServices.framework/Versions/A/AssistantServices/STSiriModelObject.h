@class NSString;

@interface STSiriModelObject : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (void).cxx_destruct;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;

@end
