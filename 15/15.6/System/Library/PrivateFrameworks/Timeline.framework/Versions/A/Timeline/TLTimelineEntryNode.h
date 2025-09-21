@class NSDate;
@protocol TLTimelineEntry;

@interface TLTimelineEntryNode : TLTimelineNode

@property (retain, nonatomic) id<TLTimelineEntry> entry;
@property (readonly, copy, nonatomic) NSDate *date;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)leftEntryNode;
- (id)rightEntryNode;

@end
