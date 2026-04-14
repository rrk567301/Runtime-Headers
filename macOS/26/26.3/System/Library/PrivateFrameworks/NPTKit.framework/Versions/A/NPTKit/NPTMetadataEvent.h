@class NSDictionary, NSDate;

@interface NPTMetadataEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) Class collectorType;
@property (nonatomic) int eventType;
@property (retain, nonatomic) NSDate *timeStamp;
@property (nonatomic) double timeSinceStart;
@property (retain, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSDictionary *asDictionary;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(Class)a0 eventType:(int)a1 timeStamp:(id)a2 data:(id)a3;

@end
