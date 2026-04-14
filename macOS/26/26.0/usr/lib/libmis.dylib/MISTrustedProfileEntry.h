@class NSString, MISTrustedTeamIDEntry;

@interface MISTrustedProfileEntry : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) MISTrustedTeamIDEntry *trustedTeamIDEntry;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithUUID:(id)a0 trustedTeamIDEntry:(id)a1;

@end
