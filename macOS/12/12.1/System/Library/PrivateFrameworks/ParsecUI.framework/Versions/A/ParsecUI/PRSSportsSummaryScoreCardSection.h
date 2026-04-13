@class NSArray, NSString;

@interface PRSSportsSummaryScoreCardSection : PRSBaseCardSection

@property (readonly, nonatomic) NSArray *images;
@property (readonly, nonatomic) NSArray *image_labels;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSArray *images_alignment;
@property (readonly, nonatomic) NSString *csType;
@property (readonly, nonatomic) NSArray *image_axLabels;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
