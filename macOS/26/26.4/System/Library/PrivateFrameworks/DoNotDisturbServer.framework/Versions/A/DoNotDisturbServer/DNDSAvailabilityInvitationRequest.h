@class NSArray, AKAvailabilityInvitation;

@interface DNDSAvailabilityInvitationRequest : NSObject

@property (readonly, copy) NSArray *handles;
@property (readonly, copy) AKAvailabilityInvitation *invitation;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithHandles:(id)a0 invitation:(id)a1;

@end
