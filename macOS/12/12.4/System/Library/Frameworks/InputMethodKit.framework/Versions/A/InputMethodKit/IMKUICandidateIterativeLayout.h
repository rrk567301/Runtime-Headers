@class NSMutableDictionary;

@interface IMKUICandidateIterativeLayout : IMKUIAbstractCandidateLayout

@property (nonatomic) unsigned long long candidateIndex;
@property (nonatomic) unsigned long long candidateGroupIndex;
@property (retain, nonatomic) NSMutableDictionary *indexPathToCandidateItemMapping;
@property (nonatomic, getter=isComplete) BOOL complete;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)prepareLayout;
- (BOOL)iterate;
- (void)setCandidateGroups:(id)a0;
- (void)didStartIteratingOverCandidateList:(id)a0 title:(id)a1;
- (void)didFinishIteratingOverCandidateList:(id)a0 title:(id)a1;
- (void)didFinishIterating;
- (void)processCandidateItem:(id)a0 stop:(BOOL *)a1;
- (id)itemForIndexPath:(id)a0;

@end
