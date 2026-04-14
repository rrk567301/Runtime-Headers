@class NSString;
@protocol TUUIXPCClient;

@interface TUUIXPClientConnectionWeakWrapper : NSObject <TUUIXPCClient>

@property (weak, nonatomic) id<TUUIXPCClient> wrappedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWrappedObject:(id)a0;

@end
