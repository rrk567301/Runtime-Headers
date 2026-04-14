@class NSUUID;

@interface SLSecureCursorAssertion : NSObject

@property (retain) NSUUID *uuid;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)invalidateAll;
+ (id)assertion;

- (void)dealloc;
- (void)invalidate;

@end
