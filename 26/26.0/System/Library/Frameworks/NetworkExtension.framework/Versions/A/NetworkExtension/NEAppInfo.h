@class NSUUID, NSString, NSData;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying> {
    int _pid;
    NSUUID *_uuid;
    NSString *_bundleID;
    NSString *_appVersion;
    NSData *_cdHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
