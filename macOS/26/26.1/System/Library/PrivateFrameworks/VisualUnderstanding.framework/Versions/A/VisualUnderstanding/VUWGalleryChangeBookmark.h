@interface VUWGalleryChangeBookmark : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ bookmark;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBookmark:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
