@class IMKCandidateListDictionary, NSString;
@protocol IMKUICandidateLayoutDelegate;

@interface IMKUIAbstractCandidateLayout : NSObject

@property (retain, nonatomic) IMKCandidateListDictionary *candidateGroups;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (weak, nonatomic) id<IMKUICandidateLayoutDelegate> delegate;
@property (copy, nonatomic) NSString *identifier;

- (void)prepareLayout;
- (void).cxx_destruct;
- (id)itemForIndexPath:(id)a0;

@end
