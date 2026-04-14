@class NSUUID, NSData;

@interface IFCacheImage : IFConcreteImage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;

- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
