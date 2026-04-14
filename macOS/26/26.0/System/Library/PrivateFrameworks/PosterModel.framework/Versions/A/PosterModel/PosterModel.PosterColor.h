@interface PosterModel.PosterColor : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ preferredStyle;
    void /* unknown type, empty encoding */ localizedName;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
