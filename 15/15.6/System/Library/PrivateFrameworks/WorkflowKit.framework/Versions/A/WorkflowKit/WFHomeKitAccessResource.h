@class NSString;

@interface WFHomeKitAccessResource : WFAccessResource <WFHomeManagerEventObserver>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSystemResource;

- (void).cxx_destruct;
- (unsigned long long)status;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
