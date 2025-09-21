@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_sourceBundleIdentifier;
    NSString *_systemBuildVersion;
    NSString *_productType;
    unsigned long long _state;
    int _protocolVersion;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly, copy) NSString *systemBuildVersion;
@property (readonly, copy) NSString *productType;
@property (readonly, getter=isActive) char active;
@property (readonly, getter=isRestoreComplete) char restoreComplete;
@property (readonly) int protocolVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceBundleIdentifier:(id)a0 systemBuildVersion:(id)a1 productType:(id)a2 active:(char)a3 restoreComplete:(char)a4 protocolVersion:(int)a5;

@end
