@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *shareMethod;

+ (char)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 shareMethod:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 shareMethod:(id)a2;
- (id)mutableAnalyticsEventRepresentation;

@end
