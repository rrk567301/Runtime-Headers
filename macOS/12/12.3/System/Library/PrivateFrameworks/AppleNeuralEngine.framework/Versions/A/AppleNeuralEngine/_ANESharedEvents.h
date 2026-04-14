@class NSArray;

@interface _ANESharedEvents : NSObject

@property (readonly, nonatomic) NSArray *signalEvents;
@property (readonly, nonatomic) NSArray *waitEvents;

+ (id)new;
+ (id)sharedEventsWithSignalEvents:(id)a0 waitEvents:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSignalEvents:(id)a0 waitEvents:(id)a1;

@end
