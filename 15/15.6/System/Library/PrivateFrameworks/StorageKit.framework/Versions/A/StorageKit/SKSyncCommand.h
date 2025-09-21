@class NSError;

@interface SKSyncCommand : NSObject

@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)onCallbackWithError:(id)a0;
- (char)returnWithError:(id *)a0;

@end
