@interface PosterModel.PosterContentGradientStyle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _colors;
    void /* unknown type, empty encoding */ startPoint;
    void /* unknown type, empty encoding */ endPoint;
    void /* unknown type, empty encoding */ locations;
    void /* unknown type, empty encoding */ gradientType;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
