@class NSString, NSObject;
@protocol FxPlugPrincipalDelegate;

@interface FxPrincipalAPIHandler : NSObject <PROAPIObject> {
    NSObject<FxPlugPrincipalDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)servicePrincipal;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;

@end
