@class NSString;

@interface MSPKIStatusInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long status;
@property (readonly) NSString *statusString;
@property (readonly) long long failInfo;
@property (readonly) BOOL hasFailInfo;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 statusString:(id)a1 failInfo:(long long)a2 hasFailInfo:(BOOL)a3;

@end
