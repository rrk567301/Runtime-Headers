@interface PKPassTileStateForeignView : PKPassTileState

@property (readonly, copy, nonatomic) id /* block */ adaptorProvider;
@property (readonly, nonatomic) long long preferredStyle;

+ (id)createWithPreferredStyle:(long long)a0 adaptorProvider:(id /* block */)a1;

- (void).cxx_destruct;

@end
