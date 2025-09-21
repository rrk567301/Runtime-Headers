@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {
    NSMutableDictionary *actualDictionary;
    unsigned long long type;
    unsigned int orignalCallID;
}

@property unsigned int callID;
@property (readonly) unsigned int originalCallID;
@property long long nonce;

+ (char)validateDictionary:(id)a0;
+ (char)validateCancel:(id)a0;
+ (char)validateInvite:(id)a0;
+ (id)dictionaryFromData:(id)a0;
+ (id)inviteDictionaryToParticipantID:(id)a0 fromParticipantID:(id)a1 connectionData:(id)a2 callID:(unsigned int)a3 focus:(char)a4;
+ (char)validateFocus:(id)a0;
+ (char)validateReply:(id)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)version;
- (unsigned long long)response;
- (id)participantID;
- (void)setFocus:(char)a0;
- (char)isFocus;
- (id)connectionData;
- (id)remoteVCPartyID;
- (id)cancelDictionary;
- (id)createBlob;
- (id)focusDictionary:(char)a0;
- (id)fromParticipantID;
- (char)isCancelDictionary;
- (char)isFocusDictionary;
- (char)isInviteDictionary;
- (char)isReplyDictionary;
- (id)localVCPartyID;
- (char)matchesNonce:(long long)a0;
- (char)matchesResponse:(id)a0;
- (id)replyDictionary:(unsigned long long)a0 connectionData:(id)a1 callID:(unsigned int)a2 focus:(char)a3;
- (void)setFromParticipantID:(id)a0;
- (id)setLocalVCPartyID:(id)a0;
- (id)setRemoteVCPartyID:(id)a0;

@end
