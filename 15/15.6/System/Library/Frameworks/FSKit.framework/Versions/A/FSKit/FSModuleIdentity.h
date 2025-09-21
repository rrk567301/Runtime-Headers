@class NSString, NSUUID, NSDictionary, NSURL;

@interface FSModuleIdentity : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *desc;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *localizedName;
@property (readonly) NSDictionary *attributes;
@property (readonly, getter=isSystem) char system;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSURL *url;
@property (readonly, nonatomic, getter=isEnabled) char enabled;

- (id)description;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (id)initWithApplicationExtensionRecord:(id)a0 isEnabled:(char)a1;
- (id)initWithApplicationExtensionRecord:(id)a0 isEnabled:(char)a1 isSystem:(char)a2;

@end
