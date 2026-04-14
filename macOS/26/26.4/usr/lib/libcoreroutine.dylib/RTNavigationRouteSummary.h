@class RTMapItem;

@interface RTNavigationRouteSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTMapItem *originMapItem;
@property (retain, nonatomic) RTMapItem *destinationMapItem;
@property (nonatomic) double travelTime;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginMapItem:(id)a0 destinationMapItem:(id)a1 travelTime:(double)a2;

@end
