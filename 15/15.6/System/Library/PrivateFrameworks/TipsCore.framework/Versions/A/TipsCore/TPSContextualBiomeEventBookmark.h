@protocol BMBookmark;

@interface TPSContextualBiomeEventBookmark : TPSContextualEventBookmark

@property (retain, nonatomic) id<BMBookmark> sinkBookmark;

+ (char)supportsSecureCoding;
+ (id)bookmarkWithSinkBookmark:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
