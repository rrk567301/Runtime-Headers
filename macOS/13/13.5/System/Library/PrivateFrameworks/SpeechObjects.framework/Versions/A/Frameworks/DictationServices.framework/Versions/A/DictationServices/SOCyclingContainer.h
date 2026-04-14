@class NSMutableArray;

@interface SOCyclingContainer : NSObject

@property (nonatomic) BOOL visible;
@property (retain, nonatomic) NSMutableArray *labelViewWindows;

- (id)init;
- (BOOL)isVisible;
- (void)addLabelViewWindow:(id)a0;
- (BOOL)containsViewWindow:(id)a0;
- (void)hideContainer;
- (void)removeAllLabelViewWindows;
- (void)removeLabelViewWindow:(id)a0;
- (void)showContainer;
- (id)viewLabelWindowsInContainer;

@end
