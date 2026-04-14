@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;

+ (id)sharedHandler;

- (void)resetState;
- (id)init;
- (BOOL)handleEvent:(id)a0;
- (void)dealloc;
- (BOOL)shouldDoSpecialHandling;

@end
