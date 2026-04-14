@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)stringForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (BOOL)isAvailable;
- (id)objectForKey:(id)a0;
- (id)URLRequest;
- (void)checkForUpdate;
- (void).cxx_destruct;
- (void)updateRemoteDefaults;
- (id)initWithBackgroundTaskable:(id)a0;
- (id)URLForKey:(id)a0;
- (id)init;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;

@end
