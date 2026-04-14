@class NSString;

@interface SARDStartCorrectedServerRequest : SARDStartServerRequest

@property (copy, nonatomic) NSString *interactionIdToBeCorrected;
@property (copy, nonatomic) NSString *utteranceToBeCorrected;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
