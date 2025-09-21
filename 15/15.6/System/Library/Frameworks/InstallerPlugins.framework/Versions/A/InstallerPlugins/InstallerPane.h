@class NSString, NSView, IFDocument, InstallerSection, NSObject, NSButton;
@protocol InstallerSectionController;

@interface InstallerPane : NSObject {
    id parentSection;
    struct InstallerPane_Private { id x0; } *_private;
}

@property (readonly) IFDocument *distribution;
@property (readonly, getter=isVisible) char visible;
@property (readonly) NSObject<InstallerSectionController> *_sectionController;
@property (readonly) char goBackToTargetSelect;
@property (readonly) NSButton *previousButton;
@property (readonly) NSButton *nextButton;
@property (readonly) NSView *bottomContentView;
@property (readonly) NSString *printMenuTitle;
@property (readonly) char drawsPaneBorder;
@property (readonly) double paneBackgroundOpacity;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSView *initialKeyView;
@property (retain, nonatomic) NSView *firstKeyView;
@property (retain, nonatomic) NSView *lastKeyView;
@property (retain, nonatomic) InstallerPane *nextPane;
@property (readonly) NSString *title;
@property (readonly) InstallerSection *section;
@property char nextEnabled;
@property char previousEnabled;
@property (readonly) char gotoNextPane;
@property (readonly) char gotoPreviousPane;

- (void)dealloc;
- (void)setTitle:(id)a0;
- (void)setLastKeyView:(id)a0;
- (id)initWithSection:(id)a0;
- (void)setFirstKeyView:(id)a0;
- (void)_setSection:(id)a0;
- (void)setInitialKeyView:(id)a0;
- (id)_bottomContentView;
- (void)setNextDefault:(char)a0;
- (id)localizedFormattedStringForKey:(id)a0;
- (char)shouldExitPane:(long long)a0;
- (void)unloadResources;
- (void)_ownerBeingReleased:(id)a0;
- (void)didEnterPane:(long long)a0;
- (void)didExitPane:(long long)a0;
- (void)setNextPane:(id)a0;
- (void)setNextTitle:(id)a0;
- (void)setPreviousTitle:(id)a0;
- (void)willEnterPane:(long long)a0;
- (void)willExitPane:(long long)a0;

@end
