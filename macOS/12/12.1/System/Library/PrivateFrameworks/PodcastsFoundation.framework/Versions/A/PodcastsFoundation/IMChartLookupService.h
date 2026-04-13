@class NSString;

@interface IMChartLookupService : IMBasePlatformLookupService

@property (retain, nonatomic) NSString *genreId;
@property (retain, nonatomic) NSString *chartNumber;
@property (retain, nonatomic) NSString *contentProfile;
@property (retain, nonatomic) NSString *contentArtworkType;
@property unsigned long long limit;
@property BOOL filterExplicit;

- (void).cxx_destruct;
- (void)request:(id /* block */)a0;
- (id)urlRequest;
- (void)performRequest:(id /* block */)a0;
- (id)platformAction;
- (id)initWithGenreId:(id)a0 andChartNumber:(id)a1;

@end
