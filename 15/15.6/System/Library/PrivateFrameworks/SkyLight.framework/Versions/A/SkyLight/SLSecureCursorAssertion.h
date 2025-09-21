@class NSUUID;

@interface SLSecureCursorAssertion : NSObject

@property (retain) NSUUID *uuid;
@property (readonly, nonatomic, getter=isValid) char valid;

+ (id)assertion;
+ (void)invalidateAll;

- (void)dealloc;
- (void)invalidate;

@end
