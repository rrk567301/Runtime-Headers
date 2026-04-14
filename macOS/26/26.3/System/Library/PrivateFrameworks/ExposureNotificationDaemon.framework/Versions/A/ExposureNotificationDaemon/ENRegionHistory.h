@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (id)getRegionVisits;
- (id)description;
- (id)init;
- (void)removeRegionVisit:(id)a0;
- (void)addRegionVisit:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllRegionVisits;
- (id)initWithRegionVisits:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)getRegions;

@end
