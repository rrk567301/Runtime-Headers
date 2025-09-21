@class NSError, NSArray;

@interface MEOutgoingMessageEncodingStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char shouldSign;
@property (readonly, nonatomic) char shouldEncrypt;
@property (readonly, nonatomic) char canSign;
@property (readonly, nonatomic) char canEncrypt;
@property (readonly, copy, nonatomic) NSError *securityError;
@property (readonly, copy, nonatomic) NSArray *addressesFailingEncryption;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCanSign:(char)a0 canEncrypt:(char)a1 securityError:(id)a2 addressesFailingEncryption:(id)a3;
- (id)initWithCanSign:(char)a0 canEncrypt:(char)a1 shouldSign:(char)a2 shouldEncrypt:(char)a3 securityError:(id)a4 addressesFailingEncryption:(id)a5;

@end
