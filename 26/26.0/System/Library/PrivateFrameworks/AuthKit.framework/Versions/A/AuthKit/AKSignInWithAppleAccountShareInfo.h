@class NSString;

@interface AKSignInWithAppleAccountShareInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *participantHandle;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSString *shareToken;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *participantID;
@property (readonly, copy, nonatomic) NSString *participantName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupID:(id)a0 participantID:(id)a1;
- (id)initWithGroupID:(id)a0 participantID:(id)a1 participantName:(id)a2;

@end
