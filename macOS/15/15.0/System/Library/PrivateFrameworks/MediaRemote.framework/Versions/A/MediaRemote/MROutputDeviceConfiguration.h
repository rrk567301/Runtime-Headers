@class NSString;

@interface MROutputDeviceConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long surface;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *presentingAppBundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0 presentingAppBundleID:(id)a1 surface:(unsigned long long)a2;

@end
