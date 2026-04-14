@class NSString, NSData;

@interface MISTrustedTeamIDEntry : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSData *signature;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTeamID:(id)a0 signature:(id)a1;

@end
