@class NSURL;

@interface ICSingleFileOpenPanelDelegate : NSObject

@property (retain, nonatomic) NSURL *singleFileURL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)panel:(id)a0 shouldEnableURL:(id)a1;

@end
