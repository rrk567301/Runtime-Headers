@class NSString;

@interface CalAgentDefaultTCCChecker : NSObject <CalAgentTCCChecker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasAccessForAuditToken:(struct { unsigned int x0[8]; })a0;

@end
