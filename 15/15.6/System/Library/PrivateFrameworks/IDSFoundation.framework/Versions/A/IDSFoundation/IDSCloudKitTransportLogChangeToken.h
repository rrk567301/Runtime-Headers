@class IDSCKServerChangeToken;

@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IDSCKServerChangeToken *ckToken;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCKToken:(id)a0;

@end
