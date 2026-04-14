@class NSString;

@interface ATXSharedDigestEngagementTrackingMetrics : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numExpansions;
@property (nonatomic) unsigned long long numDigestExpansions;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) unsigned long long sectionSize;

- (id)encodeAsProto;
- (id)initFromJSON:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)jsonRepresentation;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)addMetricsFromOtherTracker:(id)a0;
- (BOOL)isEqualToATXSharedDigestEngagementTrackingMetrics:(id)a0;

@end
