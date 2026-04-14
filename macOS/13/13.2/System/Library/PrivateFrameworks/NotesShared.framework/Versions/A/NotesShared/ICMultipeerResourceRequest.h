@class ICNote, NSUUID, NSMutableSet;

@interface ICMultipeerResourceRequest : NSOperation

@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property BOOL isSuccessful;
@property (readonly) ICNote *note;
@property (retain, nonatomic) NSUUID *deviceUUID;
@property (retain, nonatomic) NSMutableSet *failedDevices;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)startRequest;
- (void)didFinish:(id)a0;

@end
