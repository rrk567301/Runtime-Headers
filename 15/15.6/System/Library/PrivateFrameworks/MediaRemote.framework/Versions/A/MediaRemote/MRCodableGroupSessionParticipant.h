@class NSString, MRUserIdentity;

@interface MRCodableGroupSessionParticipant : NSObject <MRGroupSessionParticipant, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) MRUserIdentity *identity;
@property (nonatomic, getter=isPending) char pending;
@property (nonatomic, getter=isConnected) char connected;
@property (nonatomic, getter=isGuest) char guest;
@property (nonatomic, getter=isHidden) char hidden;
@property (nonatomic, getter=isLocal) char local;
@property (nonatomic, getter=isHost) char host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 identity:(id)a1 connected:(char)a2 guest:(char)a3 hidden:(char)a4;

@end
