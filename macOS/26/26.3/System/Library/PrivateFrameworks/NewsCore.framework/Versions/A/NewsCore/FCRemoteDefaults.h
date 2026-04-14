@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (BOOL)isAvailable;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)checkForUpdate;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)updateRemoteDefaults;
- (id)initWithBackgroundTaskable:(id)a0;
- (id)URLRequest;

@end
