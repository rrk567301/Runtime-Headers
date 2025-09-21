@class NSUUID, NSString, TUHandle;

@interface TUScreenSharingRemoteControlParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) TUHandle *normalizedHandle;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithParticipant:(id)a0;
- (BOOL)isEqualToParticipant:(id)a0;
- (id)initWithIdentifier:(id)a0 destinationID:(id)a1;
- (id)initWithIdentifier:(id)a0 normalizedHandle:(id)a1;

@end
