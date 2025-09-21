@class NSObject, ENTemporaryExposureKey, NSDate;
@protocol ENTemporaryExposureKeyManagerDelegate, OS_dispatch_queue;

@interface ENTemporaryExposureKeyManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSDate *nextPromptDate;
@property (readonly, nonatomic) ENTemporaryExposureKey *oldestTEK;
@property (readonly, nonatomic) unsigned int lastTEKRequestENIN;
@property (weak, nonatomic) id<ENTemporaryExposureKeyManagerDelegate> delegate;

+ (id)temporaryExposureKeyFromRawKey:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)_getTemporaryExposureKeysFromRollingStart:(unsigned int)a0 includingActive:(char)a1 refresh:(char)a2 error:(id *)a3;
- (id)getTemporaryExposureKeysForClient:(id)a0 fromRollingStart:(unsigned int)a1 didPrompt:(char)a2 forTesting:(char)a3 forceRefresh:(char)a4 error:(id *)a5;
- (id)getTemporaryExposureKeysFromRollingStart:(unsigned int)a0 includingActive:(char)a1 refresh:(char)a2 error:(id *)a3;
- (char)requireKeyReleasePromptForClient:(id)a0;
- (void)resetClientState;

@end
