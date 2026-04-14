@class NSString, NSUUID, NSObject;
@protocol NSSecureCoding;

@interface NSRemoteViewControllerParametersForService : NSRemoteViewControllerParametersForServiceBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *serviceViewControllerClassName;
@property (retain) NSUUID *extensionIdentifier;
@property (copy) NSObject<NSSecureCoding> *hostAppClientParameters;
@property (copy) NSString *serviceViewControllerInstanceIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
