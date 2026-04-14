@class NSUUID, NSString, NSArray;

@interface TUContinuityConversation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long avMode;
@property (readonly, nonatomic) long long remoteMemberCount;
@property (readonly, nonatomic) NSArray *remoteMemberContactIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 displayName:(id)a1 avMode:(unsigned long long)a2 remoteMemberCount:(long long)a3 remoteMemberContactIdentifiers:(id)a4;

@end
