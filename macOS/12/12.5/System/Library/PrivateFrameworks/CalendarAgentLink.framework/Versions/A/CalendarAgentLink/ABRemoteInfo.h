@class NSString;

@interface ABRemoteInfo : ABRemoteRecord

@property (copy) NSString *meUID;
@property (copy) NSString *remoteLocation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
