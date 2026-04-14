@class NSArray;

@interface PRSMovieListCardSection : PRSTitleCardSection

@property (readonly, nonatomic) NSArray *movies;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 movies:(id)a2;

@end
