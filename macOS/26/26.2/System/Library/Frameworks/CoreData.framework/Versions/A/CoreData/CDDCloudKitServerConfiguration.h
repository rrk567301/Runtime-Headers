@class NSString;

@interface CDDCloudKitServerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString *_storeDirectoryPath;
    NSString *_machServiceName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
