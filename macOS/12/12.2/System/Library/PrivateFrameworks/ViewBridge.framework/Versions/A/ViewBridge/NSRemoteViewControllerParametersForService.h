@class NSString, NSUUID, NSObject;
@protocol NSSecureCoding;

@interface NSRemoteViewControllerParametersForService : NSRemoteViewControllerParametersForServiceBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *serviceViewControllerClassName;
@property (retain) NSUUID *extensionIdentifier;
@property (copy) NSObject<NSSecureCoding> *hostAppClientParameters;
@property (copy) NSString *serviceViewControllerInstanceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
