@interface PosterModel.PosterContentGradientStyle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _colors;
    void /* unknown type, empty encoding */ startPoint;
    void /* unknown type, empty encoding */ endPoint;
    void /* unknown type, empty encoding */ locations;
    void /* unknown type, empty encoding */ gradientType;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
