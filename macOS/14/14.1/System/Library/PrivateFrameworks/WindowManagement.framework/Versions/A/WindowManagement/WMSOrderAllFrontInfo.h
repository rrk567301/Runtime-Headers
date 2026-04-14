@interface WMSOrderAllFrontInfo : NSObject <BSXPCSecureCoding, NSCopying>

@property (nonatomic) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimestamp:(unsigned long long)a0;

@end
