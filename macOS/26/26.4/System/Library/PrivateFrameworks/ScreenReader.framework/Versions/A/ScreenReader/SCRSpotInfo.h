@class NSString;

@interface SCRSpotInfo : NSObject

@property (retain, nonatomic) id element;
@property (nonatomic) BOOL isUserAssigned;
@property (nonatomic) long long assignedKey;
@property (copy, nonatomic) NSString *hashLabel;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithElement:(id)a0;

@end
