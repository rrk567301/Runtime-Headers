@class NSDictionary;

@interface IMDKeyTransparencyController : NSObject {
    void /* unknown type, empty encoding */ app;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BOOL selfOptedIn;
@property (nonatomic, readonly) NSDictionary *setupInfo;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (void)optInStateChanged:(id)a0;

@end
