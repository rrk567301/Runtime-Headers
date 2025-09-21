@interface AAAppState : NSObject

@property (readonly, nonatomic) char isInstalled;
@property (readonly, nonatomic) char isRestricted;

- (id)initWithInstalled:(char)a0 isRestricted:(char)a1;

@end
