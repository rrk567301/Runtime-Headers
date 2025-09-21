@interface SearchUICustomViewCardSectionView : SearchUICardSectionView {
    void /* unknown type, empty encoding */ baseView;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ wrappedView;
    void /* unknown type, empty encoding */ alreadyDispatchedOnMainQueue;
}

@property (nonatomic, weak) void /* function */ viewProvider;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (BOOL)needsInternalFocus;
- (void)removeManualFocus;
- (BOOL)setupManualFocus;
- (void)updateWithRowModel:(id)a0;

@end
