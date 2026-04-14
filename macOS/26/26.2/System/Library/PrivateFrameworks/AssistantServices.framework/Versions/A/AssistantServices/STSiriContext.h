@class NSArray;

@interface STSiriContext : NSObject <NSSecureCoding> {
    NSArray *_modelObjects;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_aceValue;
- (id)initWithModelObjects:(id)a0;
- (id)modelObjects;

@end
