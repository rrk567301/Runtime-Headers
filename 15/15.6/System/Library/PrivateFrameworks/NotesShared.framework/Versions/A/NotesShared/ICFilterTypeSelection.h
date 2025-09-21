@class NSString, NSManagedObjectID;

@interface ICFilterTypeSelection : NSObject <NSCopying>

@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly, nonatomic) NSString *rawFilterValue;
@property (retain, nonatomic) NSManagedObjectID *accountObjectID;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) NSString *emptySummaryTitle;
@property (readonly, nonatomic) NSString *emptySummary;
@property (readonly, nonatomic) NSString *shortEmptySummary;
@property (readonly, nonatomic) char isValid;

+ (id)keyPathsForValuesAffectingIsValid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
