@class NSUUID, NSString, NSDictionary, NSDate;

@interface HMDResidentStatusDomainData : NSObject

@property (readonly, nonatomic) NSUUID *idsIdentifier;
@property (readonly, nonatomic) NSString *idsDestination;
@property (readonly, nonatomic) NSDate *assertionTime;
@property (readonly, nonatomic) NSDictionary *dataByDomain;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasChangedFrom:(id)a0;
- (id)initWithChannelRecord:(id)a0;
- (id)initWithIDSIdentifier:(id)a0 idsDestination:(id)a1 assertionTime:(id)a2 dataByDomain:(id)a3;

@end
