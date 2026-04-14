@interface PosterModel.PosterSystemTimeFontConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timeFontIdentifier;
    void /* unknown type, empty encoding */ weight;
    void /* unknown type, empty encoding */ isSystemItem;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
