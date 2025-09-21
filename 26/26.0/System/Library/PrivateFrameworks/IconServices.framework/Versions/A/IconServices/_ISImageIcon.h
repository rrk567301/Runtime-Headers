@class NSData;

@interface _ISImageIcon : ISConcreteIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *imageData;

- (id)makeResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initImage:(id)a0;

@end
