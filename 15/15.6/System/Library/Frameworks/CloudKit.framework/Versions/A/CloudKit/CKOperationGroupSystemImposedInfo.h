@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSDictionary *networkServiceTypePerConfig;
@property long long expectedSendSize;
@property long long expectedReceiveSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
