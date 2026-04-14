@class NSMutableArray;

@interface RTVisitRedactionDetails : NSObject

@property (retain, nonatomic) NSMutableArray *visitsRedactedForAge;
@property (retain, nonatomic) NSMutableArray *visitsRedactedForAuthorizedLocation;
@property (retain, nonatomic) NSMutableArray *visitsRedactedForCategory;
@property (retain, nonatomic) NSMutableArray *visitsRedactedForConfidence;
@property (retain, nonatomic) NSMutableArray *visitsRedactedForPlaceType;
@property (retain, nonatomic) NSMutableArray *visitsRedactedForRegion;
@property (readonly, nonatomic) long long redactedVisitCount;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
