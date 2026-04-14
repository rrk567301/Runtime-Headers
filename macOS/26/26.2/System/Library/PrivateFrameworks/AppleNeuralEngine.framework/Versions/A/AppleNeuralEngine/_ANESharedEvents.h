@class NSArray;

@interface _ANESharedEvents : NSObject

@property (retain, nonatomic) NSArray *signalEvents;
@property (retain, nonatomic) NSArray *waitEvents;

+ (id)new;
+ (id)sharedEventsWithSignalEvents:(id)a0 waitEvents:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSignalEvents:(id)a0 waitEvents:(id)a1;

@end
