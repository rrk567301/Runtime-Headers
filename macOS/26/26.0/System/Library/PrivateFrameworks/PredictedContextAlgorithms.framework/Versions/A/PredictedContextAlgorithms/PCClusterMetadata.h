@class NSUUID, NSDictionary, NSArray;

@interface PCClusterMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSDictionary *phenotype;
@property (retain, nonatomic) NSDictionary *activityTypeHistogram;
@property (retain, nonatomic) NSDictionary *timeTagHistogram;
@property (retain, nonatomic) NSDictionary *dayOfWeekHistogram;
@property (retain, nonatomic) NSDictionary *weekOfYearHistogram;
@property (retain, nonatomic) NSDictionary *placeNameHistogram;
@property (retain, nonatomic) NSDictionary *combinedPlaceTypeHistogram;
@property (retain, nonatomic) NSDictionary *enclosingPlaceNameHistogram;
@property (retain, nonatomic) NSArray *subSuggestionIDsBeforePruning;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 phenoType:(id)a1;
- (id)initWithIdentifier:(id)a0 phenoType:(id)a1 activityTypeHistogram:(id)a2 timeTagHistogram:(id)a3 dayOfWeekHistogram:(id)a4 weekOfYearHistogram:(id)a5 placeNameHistogram:(id)a6 combinedPlaceTypeHistogram:(id)a7 enclosingPlaceNameHistogram:(id)a8 subSuggestionIDsBeforePruning:(id)a9;

@end
