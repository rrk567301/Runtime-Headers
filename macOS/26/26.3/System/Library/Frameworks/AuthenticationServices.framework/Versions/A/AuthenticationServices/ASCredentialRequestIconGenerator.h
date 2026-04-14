@class NSImage;

@interface ASCredentialRequestIconGenerator : NSObject

@property (class, readonly, nonatomic) NSImage *passwordManagerIcon;
@property (class, readonly, nonatomic) NSImage *systemPasskeyIcon;
@property (class, readonly, nonatomic) NSImage *systemPasswordIcon;
@property (class, readonly, nonatomic) NSImage *alternativeSecurityKeysIcon;

+ (id)_systemImageNamed:(id)a0;
+ (id)_iconForPasswordProviderBundleIdentifier:(id)a0;
+ (id)_imageForIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_keychainIcon;
+ (id)iconForApplicationIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)iconForData:(id)a0 scale:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)passwordManagerIconWithSize:(struct CGSize { double x0; double x1; })a0;

@end
