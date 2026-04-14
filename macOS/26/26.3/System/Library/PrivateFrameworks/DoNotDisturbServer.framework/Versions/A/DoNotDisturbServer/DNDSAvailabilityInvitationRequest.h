@class NSArray, AKAvailabilityInvitation;

@interface DNDSAvailabilityInvitationRequest : NSObject

@property (readonly, copy) NSArray *handles;
@property (readonly, copy) AKAvailabilityInvitation *invitation;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithHandles:(id)a0 invitation:(id)a1;

@end
