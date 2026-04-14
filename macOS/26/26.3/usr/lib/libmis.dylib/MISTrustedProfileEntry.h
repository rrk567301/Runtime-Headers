@class NSString, MISTrustedTeamIDEntry;

@interface MISTrustedProfileEntry : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) MISTrustedTeamIDEntry *trustedTeamIDEntry;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 trustedTeamIDEntry:(id)a1;

@end
