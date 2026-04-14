@class RTMapItem;

@interface RTNavigationRouteSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTMapItem *originMapItem;
@property (retain, nonatomic) RTMapItem *destinationMapItem;
@property (nonatomic) double travelTime;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginMapItem:(id)a0 destinationMapItem:(id)a1 travelTime:(double)a2;

@end
