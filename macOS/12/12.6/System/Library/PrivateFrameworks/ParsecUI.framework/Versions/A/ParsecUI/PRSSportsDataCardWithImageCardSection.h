@class NSString, NSImage, PRSColumnSection;

@interface PRSSportsDataCardWithImageCardSection : PRSCardSection

@property (readonly, nonatomic) PRSColumnSection *keys;
@property (readonly, nonatomic) PRSColumnSection *values;
@property (readonly, nonatomic) NSString *csType;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) int image_alignment;
@property (readonly, nonatomic) int data_alignment;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithKeys:(id)a0 values:(id)a1 image:(id)a2 image_alignment:(unsigned long long)a3 data_alignment:(long long)a4 type:(id)a5;

@end
