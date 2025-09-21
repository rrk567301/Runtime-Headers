@class NSString;

@interface ATXAnchorModelModeDetails : NSObject

@property (readonly, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) char isStart;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModeUUID:(id)a0 isStart:(char)a1;

@end
