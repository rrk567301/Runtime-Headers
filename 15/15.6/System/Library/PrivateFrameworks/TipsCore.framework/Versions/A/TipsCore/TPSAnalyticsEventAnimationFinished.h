@class NSString;

@interface TPSAnalyticsEventAnimationFinished : TPSAnalyticsEvent

@property (nonatomic) char animationFinished;
@property (readonly, nonatomic) NSString *animationSource;
@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;

+ (char)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 animationFinished:(char)a1 animationSource:(id)a2 collectionID:(id)a3 correlationID:(id)a4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithTipID:(id)a0 animationFinished:(char)a1 animationSource:(id)a2 collectionID:(id)a3 correlationID:(id)a4;
- (id)mutableAnalyticsEventRepresentation;

@end
