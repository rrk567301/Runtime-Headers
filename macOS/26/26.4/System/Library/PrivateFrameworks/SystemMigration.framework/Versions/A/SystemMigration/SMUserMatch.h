@class NSString;

@interface SMUserMatch : NSObject

@property (readonly, nonatomic) double confidenceScore;
@property (readonly, copy, nonatomic) NSString *matchReason;
@property (readonly, nonatomic) BOOL isAdmin;
@property (readonly, nonatomic) BOOL isFileVaultEnabled;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, nonatomic) long long uid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConfidenceScore:(double)a0 matchReason:(id)a1 smUser:(id)a2;
- (BOOL)isAutoMatch;

@end
