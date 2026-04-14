@class NSDate;
@protocol TLTimelineEntry;

@interface TLTimelineEntryNode : TLTimelineNode

@property (retain, nonatomic) id<TLTimelineEntry> entry;
@property (readonly, copy, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)leftEntryNode;
- (id)rightEntryNode;

@end
