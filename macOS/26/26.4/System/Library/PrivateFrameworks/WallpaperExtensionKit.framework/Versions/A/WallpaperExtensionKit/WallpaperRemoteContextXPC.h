@interface WallpaperRemoteContextXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ box;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
