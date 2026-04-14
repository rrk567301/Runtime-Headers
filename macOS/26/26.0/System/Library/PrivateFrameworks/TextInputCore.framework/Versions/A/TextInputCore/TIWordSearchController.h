@class NSMapTable;

@interface TIWordSearchController : NSObject

@property (retain, nonatomic) NSMapTable *inputModeToWordSearchMapping;

+ (id)sharedWordSearchController;

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (void)setWordSearch:(id)a0 forInputMode:(id)a1;
- (id)wordSearchForInputMode:(id)a0;

@end
