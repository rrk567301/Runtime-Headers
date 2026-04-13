@class NSString;
@protocol WKConnectionDelegate;

@interface WKConnection : NSObject <WKObject> {
    struct WeakObjCPtr<id<WKConnectionDelegate>> { id m_weakReference; } _delegate;
}

@property id<WKConnectionDelegate> delegate;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)_connection;
- (void)sendMessageWithName:(id)a0 body:(id)a1;

@end
