@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;

+ (id)sharedHandler;

- (BOOL)handleEvent:(id)a0;
- (void)resetState;
- (id)init;
- (void)dealloc;
- (BOOL)shouldDoSpecialHandling;

@end
