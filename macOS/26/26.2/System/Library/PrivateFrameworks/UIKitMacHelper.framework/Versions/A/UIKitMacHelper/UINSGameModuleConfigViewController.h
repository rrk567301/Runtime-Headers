@class UINSTouchAlternativesConfigurationView, UINSGameModule;

@interface UINSGameModuleConfigViewController : NSViewController

@property (weak) UINSTouchAlternativesConfigurationView *configurationParent;
@property (weak) UINSGameModule *gameModule;

- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0;
- (void)deleteGameModule:(id)a0;

@end
