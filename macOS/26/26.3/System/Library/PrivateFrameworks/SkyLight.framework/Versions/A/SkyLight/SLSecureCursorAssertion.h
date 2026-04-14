@class NSUUID;

@interface SLSecureCursorAssertion : NSObject

@property (retain) NSUUID *uuid;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)assertion;
+ (void)invalidateAll;

- (void)invalidate;
- (void)dealloc;

@end
