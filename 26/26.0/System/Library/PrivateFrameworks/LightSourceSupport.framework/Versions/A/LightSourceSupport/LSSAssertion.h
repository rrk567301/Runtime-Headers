@class NSString, NSObject;
@protocol LSSAssertionDelegate, OS_xpc_object;

@interface LSSAssertion : NSObject <BSInvalidatable> {
    NSObject<OS_xpc_object> *_connection;
}

@property (nonatomic) id<LSSAssertionDelegate> delegate;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acquire:(unsigned char)a0 reason:(id)a1;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
