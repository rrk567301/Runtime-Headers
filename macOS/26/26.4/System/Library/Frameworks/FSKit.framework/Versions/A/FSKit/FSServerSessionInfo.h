@class NSString;

@interface FSServerSessionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long howConnected;
@property (copy) NSString *connectedByUser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
