@interface VUWGalleryChangeBookmark : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ bookmark;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBookmark:(id)a0;

@end
