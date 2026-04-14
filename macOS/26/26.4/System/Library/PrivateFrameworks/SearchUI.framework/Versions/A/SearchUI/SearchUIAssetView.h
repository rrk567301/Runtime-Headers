@class SFShowPhotosOneUpViewCommand;

@interface SearchUIAssetView : PHAssetView

@property (retain, nonatomic) SFShowPhotosOneUpViewCommand *command;

- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (void)rejectPerson;
- (id)updateMenu:(id)a0 forEvent:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;

@end
