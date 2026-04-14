@class NSString;

@interface GKTransportParticipant : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *pseudonym;

+ (id)secureCodedPropertyKeys;
+ (id)participantsFrom:(id)a0 withKey:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPlayerID:(id)a0 pseudonym:(id)a1;
- (id)serverRepresentation;

@end
