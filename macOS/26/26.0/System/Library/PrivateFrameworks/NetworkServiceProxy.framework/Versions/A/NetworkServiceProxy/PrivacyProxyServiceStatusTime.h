@class NSDate;

@interface PrivacyProxyServiceStatusTime : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long serviceStatus;
@property (retain) NSDate *serviceStatusStartTime;
@property (retain) NSDate *serviceStatusEndTime;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)diagnostics;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
