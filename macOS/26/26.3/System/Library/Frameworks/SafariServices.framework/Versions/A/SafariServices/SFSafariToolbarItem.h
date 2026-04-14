@class NSUUID, SFSafariExtensionContext;

@interface SFSafariToolbarItem : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_uuid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *_uuid;
@property (retain, nonatomic) SFSafariExtensionContext *_extensionContext;

- (id)_remoteObjectProxy;
- (void)setEnabled:(BOOL)a0;
- (void)setLabel:(id)a0;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)showPopover;
- (id)_initWithUUID:(id)a0;
- (void)setBadgeText:(id)a0;
- (void)setEnabled:(BOOL)a0 withBadgeText:(id)a1;

@end
