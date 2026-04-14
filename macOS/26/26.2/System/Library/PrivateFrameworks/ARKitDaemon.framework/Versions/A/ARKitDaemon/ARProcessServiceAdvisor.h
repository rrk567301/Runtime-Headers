@class NSString;

@interface ARProcessServiceAdvisor : NSObject <ARProcessServiceAdvisorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canAddService:(id)a0 existingServices:(id)a1 error:(id *)a2;

@end
