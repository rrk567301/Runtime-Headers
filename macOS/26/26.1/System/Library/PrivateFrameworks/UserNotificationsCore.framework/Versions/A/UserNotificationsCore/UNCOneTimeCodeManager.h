@class UNCOneTimeCodeServiceListener;

@interface UNCOneTimeCodeManager : NSObject

@property (nonatomic, retain) UNCOneTimeCodeServiceListener *listener;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)foundCode:(id)a0 displayCode:(id)a1 application:(id)a2 notification:(id)a3 timestamp:(id)a4;

@end
