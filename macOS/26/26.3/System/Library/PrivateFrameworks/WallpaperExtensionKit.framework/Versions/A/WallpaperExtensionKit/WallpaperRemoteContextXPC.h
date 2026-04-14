@interface WallpaperRemoteContextXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ box;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
