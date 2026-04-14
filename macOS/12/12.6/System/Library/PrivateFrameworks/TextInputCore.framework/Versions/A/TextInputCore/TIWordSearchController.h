@class NSMapTable;

@interface TIWordSearchController : NSObject

@property (retain, nonatomic) NSMapTable *inputModeToWordSearchMapping;

+ (id)sharedWordSearchController;

- (id)init;
- (void).cxx_destruct;
- (id)wordSearchForInputMode:(id)a0;
- (void)setWordSearch:(id)a0 forInputMode:(id)a1;

@end
