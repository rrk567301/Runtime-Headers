@class NSURL;

@interface QLImageWrapper : NSObject <NSSecureCoding> {
    struct CGImage { } *_image;
    NSURL *_url;
    BOOL _discarded;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapperWithImage:(struct CGImage { } *)a0 url:(id)a1;

- (void)discard;
- (struct CGImage { } *)image;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_startLoadingImage;

@end
