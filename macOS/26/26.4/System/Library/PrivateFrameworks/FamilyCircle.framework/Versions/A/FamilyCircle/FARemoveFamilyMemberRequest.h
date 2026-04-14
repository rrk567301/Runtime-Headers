@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)a0;
- (id)initWithFamilyMemberDSID:(id)a0 connectionProvider:(id)a1;

@end
