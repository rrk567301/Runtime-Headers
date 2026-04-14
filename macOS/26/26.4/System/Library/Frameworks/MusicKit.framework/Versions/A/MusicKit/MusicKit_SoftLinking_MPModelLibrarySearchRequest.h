@class NSString, NSArray;

@interface MusicKit_SoftLinking_MPModelLibrarySearchRequest : MusicKit_SoftLinking_MPModelRequest

@property (copy, nonatomic) NSString *searchTerm;
@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) long long limit;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithSearchTerm:(id)a0 scopes:(id)a1 filteringOptions:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; })a2 limit:(long long)a3;

@end
