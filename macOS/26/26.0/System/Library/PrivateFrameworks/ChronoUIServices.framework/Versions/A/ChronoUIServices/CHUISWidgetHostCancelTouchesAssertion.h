@class NSArray, NSString;

@interface CHUISWidgetHostCancelTouchesAssertion : NSObject <BSInvalidatable>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAssertions:(id)a0;

@end
