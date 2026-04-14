@class NSArray;
@protocol GEOTextItemDisplayConfig;

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer>

@property (readonly, nonatomic) id<GEOTextItemDisplayConfig> displayConfig;
@property (readonly, nonatomic) NSArray *textItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDisplayConfig:(id)a0 textItems:(id)a1;
- (id)initWithTextItemContainer:(id)a0;

@end
