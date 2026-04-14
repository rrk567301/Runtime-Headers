@interface EDRYxyType : NSObject

@property (nonatomic, setter=setLuminanceY:) double Y;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (void)validate;
- (void)print;
- (id)init;
- (int)getLength;
- (int)parse:(id)a0 atOffset:(int)a1;

@end
