@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRegionVisits:(id)a0;
- (id)getRegions;
- (id)init;
- (void)addRegionVisit:(id)a0;
- (id)description;
- (void)removeAllRegionVisits;
- (id)initWithCoder:(id)a0;
- (void)removeRegionVisit:(id)a0;
- (id)getRegionVisits;
- (void).cxx_destruct;

@end
