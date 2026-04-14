@class NSString;

@interface BlastDoorValidatorContext : NSObject {
    void /* unknown type, empty encoding */ validatorContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isBusiness;
@property (nonatomic, readonly) long long mdMaxChatParticipantsIncoming;

- (id)init;
- (id)initForBusinessChat:(BOOL)a0 withMaxChatParticipants:(long long)a1;

@end
