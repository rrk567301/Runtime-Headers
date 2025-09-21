@class UNCOneTimeCodeServiceListener;

@interface UNCOneTimeCodeManager : NSObject

@property (nonatomic, retain) UNCOneTimeCodeServiceListener *listener;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)foundCode:(id)a0 displayCode:(id)a1 application:(id)a2 notification:(id)a3 timestamp:(id)a4;

@end
