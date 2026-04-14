@class NSArray, NSString;

@interface _TtC8VideosUIP33_59FD7FF6DD69454110482F3344185E7C11GenresLabel : VUILabel <VUIGenresLabel> {
    void /* unknown type, empty encoding */ genresStorage;
    void /* function */ genreSeparator;
    void /* unknown type, empty encoding */ adjustedGenres;
}

@property (nonatomic, copy) NSArray *genres;
@property (nonatomic, copy) NSString *genreSeparator;
@property (nonatomic) double maxWidth;

- (void)update;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
