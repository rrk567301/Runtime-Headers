@class NSString, NSData;

@interface MISTrustedTeamIDEntry : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSData *signature;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)initWithTeamID:(id)a0 signature:(id)a1;

@end
