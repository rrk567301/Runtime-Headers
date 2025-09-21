@class NSArray;

@interface PCNativeColor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *lightModeColors;
@property (retain, nonatomic) NSArray *darkModeColors;
@property (nonatomic) long long gradientOrientation;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
