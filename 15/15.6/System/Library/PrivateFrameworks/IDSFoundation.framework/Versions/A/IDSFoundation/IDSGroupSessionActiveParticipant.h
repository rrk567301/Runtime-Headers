@class IDSPushToken, NSUUID, NSString, NSData, IDSURI;

@interface IDSGroupSessionActiveParticipant : NSObject {
    IDSURI *_participantURIObject;
    IDSPushToken *_participantPushTokenObject;
    char _givenNSNullToken;
}

@property (readonly, nonatomic) IDSPushToken *participantPushTokenObject;
@property (readonly, nonatomic) NSUUID *groupUUID;
@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) char isKnown;
@property (readonly, nonatomic) NSString *participantURI;
@property (readonly, nonatomic) NSData *participantPushToken;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithGroupUUID:(id)a0 participantIdentifier:(unsigned long long)a1 isKnown:(char)a2 participantURI:(id)a3 pushToken:(id)a4;
- (id)initWithGroupUUID:(id)a0 participantIdentifier:(unsigned long long)a1 isKnown:(char)a2 participantURIObject:(id)a3 pushTokenObject:(id)a4;

@end
