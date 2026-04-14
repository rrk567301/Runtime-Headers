@interface PosterModel.PosterColor : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ preferredStyle;
    void /* unknown type, empty encoding */ localizedName;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
