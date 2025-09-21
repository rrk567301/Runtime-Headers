@class NSString, NSLocale;

@interface LiveTranscription.AXLiveCaptionSourceInfo : NSObject {
    void /* function */ appID;
    void /* function */ appName;
    void /* unknown type, empty encoding */ locale;
}

@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceType:(long long)a0 pid:(int)a1 appID:(id)a2 appName:(id)a3 locale:(id)a4;

@end
