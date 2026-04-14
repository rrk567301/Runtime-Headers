@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;

+ (id)sharedHandler;

- (void)resetState;
- (void)dealloc;
- (BOOL)handleEvent:(id)a0;
- (id)init;
- (BOOL)shouldDoSpecialHandling;

@end
