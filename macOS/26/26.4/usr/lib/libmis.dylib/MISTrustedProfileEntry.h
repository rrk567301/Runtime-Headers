@class NSString, MISTrustedTeamIDEntry;

@interface MISTrustedProfileEntry : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) MISTrustedTeamIDEntry *trustedTeamIDEntry;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithUUID:(id)a0 trustedTeamIDEntry:(id)a1;

@end
