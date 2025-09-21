@class NSDate;

@interface ATXDigestTimeline : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *firstUpcomingViewTimestamp;
@property (retain, nonatomic) NSDate *firstCollapsedViewTimestamp;
@property (retain, nonatomic) NSDate *firstScheduledViewTimestamp;
@property (retain, nonatomic) NSDate *digestRemovedTimestamp;

- (id)initFromJSON:(id)a0;
- (id)encodeAsProto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_timelineFieldsAreEqual:(id)a0 otherField:(id)a1;
- (BOOL)isEqualToATXDigestTimeline:(id)a0;

@end
