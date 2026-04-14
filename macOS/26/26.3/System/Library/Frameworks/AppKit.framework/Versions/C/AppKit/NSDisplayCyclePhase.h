@class NSString, NSHashTable;

@interface NSDisplayCyclePhase : NSObject {
    NSString *_name;
    NSHashTable *_earlierPhases;
    NSHashTable *_laterPhases;
}

@property (readonly, copy) NSString *name;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithName:(id)a0 beforePhases:(id)a1 afterPhases:(id)a2;

@end
