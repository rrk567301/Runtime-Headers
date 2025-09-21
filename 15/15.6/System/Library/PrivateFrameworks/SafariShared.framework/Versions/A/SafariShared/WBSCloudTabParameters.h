@class NSString, NSDictionary, NSURL, NSUUID;

@interface WBSCloudTabParameters : NSObject

@property (nonatomic) double lastViewedTime;
@property (nonatomic, getter=isPinned) char pinned;
@property (copy, nonatomic) NSDictionary *readerScrollPosition;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic, getter=isShowingReader) char showingReader;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
