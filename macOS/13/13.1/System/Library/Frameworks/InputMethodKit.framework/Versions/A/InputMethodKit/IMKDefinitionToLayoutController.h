@class IMKCandidateController, IMKDefinitionToLayoutConstraint, IMKLayout, IMKCandidateUIProperties, IMKCandidateData;

@interface IMKDefinitionToLayoutController : NSObject

@property (nonatomic) IMKCandidateController *candidateController;
@property (nonatomic, getter=isVerticallyAligned) BOOL verticallyAligned;
@property (nonatomic) Class layoutUnitClass;
@property (retain, nonatomic) IMKDefinitionToLayoutConstraint *constraints;
@property (retain, nonatomic) IMKCandidateData *candidateData;
@property (retain, nonatomic) IMKCandidateUIProperties *UIProperties;
@property (readonly, nonatomic) IMKLayout *layout;

- (void)dealloc;
- (id)init;
- (void)removeLastLineIfEmpty:(id)a0;
- (id)layoutForSingleRowPressAndHoldType;
- (id)layoutForSingleRowTypeWithSimilarWidth;
- (id)layoutForSingleRowType;
- (id)layoutForVerticallyAligned;
- (id)layoutForHorizontallyAligned;

@end
