@class NSString, NSData;

@interface MISTrustedTeamIDEntry : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSData *signature;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithTeamID:(id)a0 signature:(id)a1;

@end
