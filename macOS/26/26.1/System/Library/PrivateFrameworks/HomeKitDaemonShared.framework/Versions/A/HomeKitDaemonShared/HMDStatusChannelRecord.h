@class NSUUID, NSString, NSDictionary, NSDate;

@interface HMDStatusChannelRecord : NSObject

@property (readonly, nonatomic) NSUUID *idsIdentifier;
@property (readonly, nonatomic) NSString *idsDestination;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSDate *assertionTime;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdsIdentifier:(id)a0 idsDestination:(id)a1 payload:(id)a2 assertionTime:(id)a3;
- (id)initWithPresentDevice:(id)a0;

@end
