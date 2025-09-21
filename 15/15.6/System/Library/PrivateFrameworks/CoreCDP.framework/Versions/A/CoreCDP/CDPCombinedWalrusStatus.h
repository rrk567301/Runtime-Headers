@interface CDPCombinedWalrusStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long octagonWalrusStatus;
@property (nonatomic) unsigned long long pcsWalrusStatus;
@property (nonatomic) unsigned long long escrowWalrusStatus;
@property (readonly, nonatomic) char mismatchDetected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
