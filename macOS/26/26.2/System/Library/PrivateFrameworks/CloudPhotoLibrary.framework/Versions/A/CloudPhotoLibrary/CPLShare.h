@class NSArray, NSURL, NSDate, CPLShareParticipant, NSData;

@interface CPLShare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long publicPermission;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) CPLShareParticipant *owner;
@property (readonly, nonatomic) CPLShareParticipant *currentUserParticipant;
@property (readonly, nonatomic) BOOL ownerIsCurrentUser;
@property (copy, nonatomic) NSData *transportShare;

+ (void)initialize;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
