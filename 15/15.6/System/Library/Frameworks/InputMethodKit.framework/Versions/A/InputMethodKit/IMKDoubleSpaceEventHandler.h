@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;

+ (id)sharedHandler;

- (void)dealloc;
- (id)init;
- (char)handleEvent:(id)a0;
- (void)resetState;
- (char)shouldDoSpecialHandling;

@end
