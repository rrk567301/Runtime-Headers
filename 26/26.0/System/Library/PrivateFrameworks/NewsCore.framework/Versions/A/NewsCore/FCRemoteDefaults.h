@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)stringForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)init;
- (id)initWithBackgroundTaskable:(id)a0;
- (void)checkForUpdate;
- (id)URLRequest;
- (void)updateRemoteDefaults;
- (BOOL)isAvailable;
- (void).cxx_destruct;

@end
