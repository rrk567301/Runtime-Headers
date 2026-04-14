@class NSString, NSData;

@interface MISTrustedTeamIDEntry : NSObject

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSData *signature;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithTeamID:(id)a0 signature:(id)a1;

@end
