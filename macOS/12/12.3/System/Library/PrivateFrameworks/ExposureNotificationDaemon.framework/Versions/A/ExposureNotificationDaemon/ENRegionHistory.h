@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRegionVisits:(id)a0;
- (id)getRegionVisits;
- (void)addRegionVisit:(id)a0;
- (void)removeRegionVisit:(id)a0;
- (void)removeAllRegionVisits;
- (id)getRegions;

@end
