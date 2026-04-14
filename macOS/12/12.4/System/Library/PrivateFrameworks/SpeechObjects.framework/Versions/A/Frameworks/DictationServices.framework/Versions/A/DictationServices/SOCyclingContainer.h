@class NSMutableArray;

@interface SOCyclingContainer : NSObject

@property (nonatomic) BOOL visible;
@property (retain, nonatomic) NSMutableArray *labelViewWindows;

- (id)init;
- (BOOL)isVisible;
- (void)addLabelViewWindow:(id)a0;
- (void)removeLabelViewWindow:(id)a0;
- (void)removeAllLabelViewWindows;
- (id)viewLabelWindowsInContainer;
- (BOOL)containsViewWindow:(id)a0;
- (void)showContainer;
- (void)hideContainer;

@end
