@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;

+ (id)sharedHandler;

- (void)resetState;
- (BOOL)handleEvent:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)shouldDoSpecialHandling;

@end
