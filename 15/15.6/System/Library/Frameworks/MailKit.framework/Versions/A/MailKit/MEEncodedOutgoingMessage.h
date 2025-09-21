@class NSData;

@interface MEEncodedOutgoingMessage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *rawData;
@property (readonly, nonatomic) char isSigned;
@property (readonly, nonatomic) char isEncrypted;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRawData:(id)a0 isSigned:(char)a1 isEncrypted:(char)a2;

@end
