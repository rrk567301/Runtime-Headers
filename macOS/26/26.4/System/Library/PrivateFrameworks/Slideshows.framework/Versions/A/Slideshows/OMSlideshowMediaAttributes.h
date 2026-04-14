@interface OMSlideshowMediaAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } center2;
@property (nonatomic) double scale2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_writeToDictionary;

@end
