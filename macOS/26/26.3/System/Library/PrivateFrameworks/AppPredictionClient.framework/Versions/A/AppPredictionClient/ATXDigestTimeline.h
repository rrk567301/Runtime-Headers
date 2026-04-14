@class NSDate;

@interface ATXDigestTimeline : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *firstUpcomingViewTimestamp;
@property (retain, nonatomic) NSDate *firstCollapsedViewTimestamp;
@property (retain, nonatomic) NSDate *firstScheduledViewTimestamp;
@property (retain, nonatomic) NSDate *digestRemovedTimestamp;

- (id)initFromJSON:(id)a0;
- (id)json;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_timelineFieldsAreEqual:(id)a0 otherField:(id)a1;
- (BOOL)isEqualToATXDigestTimeline:(id)a0;

@end
