@class NSString;

@interface SPExecutionPolicyItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemPath;
@property (readonly, nonatomic) NSString *signingID;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *cdHash;
@property (readonly, nonatomic) char needsApproval;
@property (readonly, nonatomic) char needsOverride;
@property (readonly, nonatomic) char knownMalware;
@property (readonly, nonatomic) NSString *blockedReasonDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemPath:(id)a0 signingID:(id)a1 teamID:(id)a2 cdHash:(id)a3 needsApproval:(char)a4 needsOverride:(char)a5 knownMalware:(char)a6 blockedReasonDescription:(id)a7;

@end
