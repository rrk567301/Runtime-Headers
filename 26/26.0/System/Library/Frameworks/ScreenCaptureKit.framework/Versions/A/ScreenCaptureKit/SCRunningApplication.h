@class NSString;

@interface SCRunningApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSString *_applicationName;
    int _processID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *applicationName;
@property (readonly) int processID;

- (id)initWithPID:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSCRunningApplication:(id)a0;

@end
