@class NSString;

@interface SCRSpotInfo : NSObject

@property (retain, nonatomic) id element;
@property (nonatomic) BOOL isUserAssigned;
@property (nonatomic) long long assignedKey;
@property (copy, nonatomic) NSString *hashLabel;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithElement:(id)a0;

@end
