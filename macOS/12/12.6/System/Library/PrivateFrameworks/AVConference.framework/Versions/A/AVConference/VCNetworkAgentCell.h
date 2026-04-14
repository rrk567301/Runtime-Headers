@interface VCNetworkAgentCell : VCObject

@property (readonly) BOOL cellularAssertionActive;

+ (id)sharedInstance;

- (void)addCellularAssertion;
- (void)removeCellularAssertion;

@end
