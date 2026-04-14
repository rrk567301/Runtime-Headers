@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)dictionaryForKey:(id)a0;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)URLForKey:(id)a0;
- (id)URLRequest;
- (id)stringForKey:(id)a0;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (id)initWithBackgroundTaskable:(id)a0;
- (void)updateRemoteDefaults;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)checkForUpdate;

@end
