@class NSArray, NSLocale;

@interface AXLiveCaptions : NSObject <AXLTTranscriberDelegateProtocol> {
    void /* unknown type, empty encoding */ clients;
    void /* unknown type, empty encoding */ micTranscriber;
    void /* unknown type, empty encoding */ audioTranscriber;
}

@property (class, nonatomic, readonly) AXLiveCaptions *shared;

+ (void)supportedLocalesWithCompletion:(void (^)(NSArray *))a0;
+ (void)installedLocalesWithCompletion:(void (^)(NSArray *))a0;
+ (void)defaultLocaleWithCompletion:(void (^)(NSLocale *))a0;
+ (id)formattedLocaleIDsFrom:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)audioInfoData:(id)a0;
- (void)liveCaptionsResult:(id)a0;
- (BOOL)startForPid:(int)a0 locale:(id)a1 error:(id *)a2 transcriptionResult:(id /* block */)a3;
- (BOOL)startWithSource:(long long)a0 locale:(id)a1 sharedRoute:(BOOL)a2 excludePIDs:(id)a3 error:(id *)a4 transcriptionResult:(id /* block */)a5;
- (BOOL)stop:(long long)a0 error:(id *)a1;
- (BOOL)stopForPid:(int)a0 error:(id *)a1;
- (void)transcriberOutputData:(id)a0;

@end
