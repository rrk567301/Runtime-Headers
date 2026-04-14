@class NSString, NSImage, NSURL;

@interface PRSRowCardSection : PRSCardSection

@property (readonly, nonatomic) BOOL card_padding_bottom;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL key_nowrap;
@property (readonly, nonatomic) int key_weight;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL value_nowrap;
@property (readonly, nonatomic) int value_weight;
@property (readonly, nonatomic) NSImage *value_image;
@property (readonly, nonatomic) NSImage *attribution_image;
@property (readonly, nonatomic) NSURL *attribution_url;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
