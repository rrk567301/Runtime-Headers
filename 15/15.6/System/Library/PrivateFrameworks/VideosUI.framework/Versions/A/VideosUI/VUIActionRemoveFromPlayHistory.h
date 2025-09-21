@class NSString;

@interface VUIActionRemoveFromPlayHistory : VUIAction

@property (retain, nonatomic) NSString *deleteID;
@property (nonatomic) char isContinueWatching;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 isContinueWatching:(char)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
