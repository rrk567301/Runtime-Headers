@class NSArray, NSString;

@interface LSSInvalidatableSet : NSObject <BSInvalidatable>

@property (retain, nonatomic) NSArray *invalidatables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addAssertionsForOptions:(unsigned int)a0 reason:(id)a1 to:(id)a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
