@interface PosterModel.PosterContentDiscreteColorsStyle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _colors;
    void /* unknown type, empty encoding */ isVibrant;
    void /* unknown type, empty encoding */ allowsVariation;
    void /* unknown type, empty encoding */ variation;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
