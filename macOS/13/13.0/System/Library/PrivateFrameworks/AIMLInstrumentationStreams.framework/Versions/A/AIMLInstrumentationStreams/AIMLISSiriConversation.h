@class NSArray, NSUUID, NSDate;

@interface AIMLISSiriConversation : NSObject {
    void /* unknown type, empty encoding */ turns;
}

@property (nonatomic, readonly) NSArray *turns;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSUUID *firstTurnId;

- (id)init;
- (void).cxx_destruct;

@end
