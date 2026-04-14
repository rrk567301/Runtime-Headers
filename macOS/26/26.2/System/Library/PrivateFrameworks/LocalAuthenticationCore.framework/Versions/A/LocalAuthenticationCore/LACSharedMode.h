@interface LACSharedMode : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed;

+ (id)defaultSharedMode;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithActive:(BOOL)a0;
- (id)initWithActive:(BOOL)a0 confirmed:(BOOL)a1;

@end
