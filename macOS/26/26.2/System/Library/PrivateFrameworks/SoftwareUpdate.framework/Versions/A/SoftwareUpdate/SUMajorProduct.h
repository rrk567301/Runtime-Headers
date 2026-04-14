@class NSString, NSData, NSImage;

@interface SUMajorProduct : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *displayTitle;
@property (readonly) NSString *displayVersion;
@property (readonly) NSString *moreInfoLinkString;
@property (readonly) NSData *iconData;
@property (readonly) NSImage *iconImage;
@property (readonly) NSString *majorOSBundleIdentifier;
@property (readonly) NSString *majorOSBundleVersion;
@property (readonly) NSString *majorOSBundleShortVersion;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithTitle:(id)a0 withProductVersion:(id)a1 withMoreInfoLink:(id)a2 withIcon:(id)a3 withMajorOSBundleIdentifier:(id)a4 withMajorOSBundleVersion:(id)a5 withMajorOSBundleShortVersion:(id)a6;
- (id)installerApplicationBundleURLOnDisk;

@end
