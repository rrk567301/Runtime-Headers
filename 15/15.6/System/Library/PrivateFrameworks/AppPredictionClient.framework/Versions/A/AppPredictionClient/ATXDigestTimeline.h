@class NSDate;

@interface ATXDigestTimeline : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *firstUpcomingViewTimestamp;
@property (retain, nonatomic) NSDate *firstCollapsedViewTimestamp;
@property (retain, nonatomic) NSDate *firstScheduledViewTimestamp;
@property (retain, nonatomic) NSDate *digestRemovedTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)jsonRepresentation;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (char)_timelineFieldsAreEqual:(id)a0 otherField:(id)a1;
- (id)initFromJSON:(id)a0;
- (char)isEqualToATXDigestTimeline:(id)a0;

@end
