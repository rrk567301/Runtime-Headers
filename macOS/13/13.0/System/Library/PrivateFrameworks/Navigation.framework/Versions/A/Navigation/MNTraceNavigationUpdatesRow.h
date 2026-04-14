@class NSString, NSArray;

@interface MNTraceNavigationUpdatesRow : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (nonatomic) long long navigationUpdateType;
@property (retain, nonatomic) NSArray *parameters;

- (void).cxx_destruct;

@end
