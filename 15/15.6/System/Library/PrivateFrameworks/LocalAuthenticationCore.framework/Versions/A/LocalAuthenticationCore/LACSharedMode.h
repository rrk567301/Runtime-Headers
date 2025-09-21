@interface LACSharedMode : NSObject

@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isConfirmed) char confirmed;

+ (id)defaultSharedMode;

- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithActive:(char)a0;
- (id)initWithActive:(char)a0 confirmed:(char)a1;

@end
