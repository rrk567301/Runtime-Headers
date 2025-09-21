@class NSString;
@protocol LACContextProviding;

@interface LACServiceXPCEndpointProvider : NSObject <LACServiceXPCEndpointProvider> {
    id<LACContextProviding> _contextProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)endpointForServiceWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithContextProvider:(id)a0;

@end
