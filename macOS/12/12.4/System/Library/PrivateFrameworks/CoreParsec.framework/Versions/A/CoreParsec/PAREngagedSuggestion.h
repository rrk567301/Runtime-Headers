@class NSString, NSData, NSDate;

@interface PAREngagedSuggestion : NSObject <NSSecureCoding, SFEngagedSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) int type;
@property (copy, nonatomic) NSData *localData;
@property (copy, nonatomic) NSDate *engagementTime;
@property (nonatomic) double score;
@property (nonatomic) double freshnessScore;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
