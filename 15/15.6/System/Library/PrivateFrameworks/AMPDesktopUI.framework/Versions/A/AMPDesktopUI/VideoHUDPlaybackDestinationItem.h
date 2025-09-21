@class NSString;

@interface VideoHUDPlaybackDestinationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) long long refCon;
@property (nonatomic) char isActive;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 symbolName:(id)a1 refCon:(long long)a2 isActive:(char)a3;

@end
