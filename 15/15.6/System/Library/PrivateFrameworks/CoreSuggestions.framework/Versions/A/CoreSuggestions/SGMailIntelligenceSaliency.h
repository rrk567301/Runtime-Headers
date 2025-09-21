@class NSNumber, NSString, NSDate;

@interface SGMailIntelligenceSaliency : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long gteSaliency;
@property (nonatomic) char isCounted;
@property (readonly, nonatomic) NSNumber *decayedScore;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) NSString *mailboxId;
@property (readonly, nonatomic) char isSalient;

+ (id)decayScore:(id)a0 creationTime:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageId:(id)a0 mailboxId:(id)a1 score:(id)a2 isSalient:(char)a3 creationDate:(id)a4;
- (id)initWithMessageId:(id)a0 mailboxId:(id)a1 score:(id)a2 isSalient:(char)a3 gteSaliency:(long long)a4 isCounted:(char)a5 creationDate:(id)a6;

@end
