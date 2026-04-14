@class NSDate;

@interface HMDHomeActivityStateDetails : HMFObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic, getter=isHomeOccupied) BOOL homeOccupied;
@property (readonly, nonatomic, getter=isHoldActive) BOOL holdActive;
@property (readonly, nonatomic) NSDate *holdExpiryTime;
@property (readonly, nonatomic) NSDate *transitionalStateEndDate;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)generatePayload;
- (id)initWithHomeActivityState:(unsigned long long)a0;
- (id)initWithHomeActivityState:(unsigned long long)a0 holdInPlace:(BOOL)a1 holdExpiryTime:(id)a2 transitionalStateEndDate:(id)a3;
- (id)initWithHomeActivityState:(unsigned long long)a0 transitionalStateEndDate:(id)a1;

@end
