@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (id)getRegions;
- (void)removeAllRegionVisits;
- (void)removeRegionVisit:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRegionVisits:(id)a0;
- (id)description;
- (id)getRegionVisits;
- (id)initWithCoder:(id)a0;
- (void)addRegionVisit:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
