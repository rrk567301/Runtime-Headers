@class NSUUID, NSString, NSDictionary, NSDate;

@interface HMDStatusChannelRecord : NSObject

@property (readonly, nonatomic) NSUUID *idsIdentifier;
@property (readonly, nonatomic) NSString *idsDestination;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSDate *assertionTime;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPresentDevice:(id)a0;
- (id)initWithIdsIdentifier:(id)a0 idsDestination:(id)a1 payload:(id)a2 assertionTime:(id)a3;

@end
