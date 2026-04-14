@class GKTurnBasedMatch, NSArray, NSString, NSData, NSDate, GKTurnBasedParticipant, GKTurnBasedExchangeInternal;

@interface GKTurnBasedExchange : NSObject

@property (retain) NSArray *recipients;
@property (retain) NSArray *replies;
@property (retain) NSString *exchangeID;
@property (retain) GKTurnBasedParticipant *sender;
@property (retain) NSData *data;
@property (retain) NSDate *timeoutDate;
@property (retain) NSDate *completionDate;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (retain) GKTurnBasedMatch *match;
@property (readonly) char status;
@property (readonly) NSString *message;
@property (readonly) NSDate *sendDate;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;

- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)message;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithInternalRepresentation:(id)a0;
- (void)_updateInternalFromMatchInternal:(id)a0;
- (void)cancelWithLocalizableMessageKey:(id)a0 arguments:(id)a1 completionHandler:(id /* block */)a2;
- (void)replyWithLocalizableMessageKey:(id)a0 arguments:(id)a1 data:(id)a2 completionHandler:(id /* block */)a3;

@end
