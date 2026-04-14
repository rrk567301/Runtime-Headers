@class NSString, MISTrustedTeamIDEntry;

@interface MISTrustedProfileEntry : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) MISTrustedTeamIDEntry *trustedTeamIDEntry;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)initWithUUID:(id)a0 trustedTeamIDEntry:(id)a1;

@end
