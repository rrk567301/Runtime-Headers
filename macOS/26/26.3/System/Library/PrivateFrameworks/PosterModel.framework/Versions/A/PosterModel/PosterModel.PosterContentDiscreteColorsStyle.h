@interface PosterModel.PosterContentDiscreteColorsStyle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _colors;
    void /* unknown type, empty encoding */ isVibrant;
    void /* unknown type, empty encoding */ allowsVariation;
    void /* unknown type, empty encoding */ variation;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
