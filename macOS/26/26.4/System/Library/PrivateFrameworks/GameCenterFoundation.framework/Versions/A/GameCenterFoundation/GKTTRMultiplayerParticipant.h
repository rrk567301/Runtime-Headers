@class NSString, NSData;

@interface GKTTRMultiplayerParticipant : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSData *pushToken;

+ (id)secureCodedPropertyKeys;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlayerID:(id)a0 pushToken:(id)a1;
- (id)serverRepresentation;

@end
