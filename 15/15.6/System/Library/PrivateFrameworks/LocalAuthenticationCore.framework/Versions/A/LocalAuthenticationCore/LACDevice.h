@interface LACDevice : NSObject

@property (class, readonly, nonatomic) LACDevice *sharedInstance;

@property (readonly, nonatomic) char isClarityBoardRunning;
@property (readonly, nonatomic) char isDynamicIslandAvailable;
@property (readonly, nonatomic) char usesFrontBoardServicesForRemoteUI;

@end
