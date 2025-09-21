@interface SHMediaItemPresentationSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char openResultInBrowserOnFailure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSettings:(id)a0;

@end
