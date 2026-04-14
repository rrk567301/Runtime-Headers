@class NSString;

@interface DDSUAFManagerStub : NSObject <DDSUAFManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)assertionIDsForClientID:(id)a0;
- (void)addAssertionForAssetsWithQuery:(id)a0 assertionID:(id)a1 clientID:(id)a2;
- (void)removeAssertionWithIdentifier:(id)a0 clientID:(id)a1;

@end
