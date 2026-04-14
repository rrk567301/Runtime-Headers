@class NSString, NSView, NSURL, NSDictionary;

@interface VUIActionShareSheet : VUIAction

@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *imageURLStr;
@property (retain, nonatomic) NSString *sharedWatchId;
@property (retain, nonatomic) NSURL *sharedWatchUrl;
@property (retain, nonatomic) NSView *sourceView;
@property (retain, nonatomic) NSDictionary *groupActivityMetadata;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 sourceView:(id)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
