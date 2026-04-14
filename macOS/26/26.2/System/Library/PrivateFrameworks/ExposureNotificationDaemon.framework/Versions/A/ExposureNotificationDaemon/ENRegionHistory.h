@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (void)addRegionVisit:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getRegionVisits;
- (void).cxx_destruct;
- (void)removeRegionVisit:(id)a0;
- (id)getRegions;
- (void)removeAllRegionVisits;
- (id)description;
- (id)initWithRegionVisits:(id)a0;
- (id)init;

@end
