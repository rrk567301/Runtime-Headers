@class NSString, WFContentItem, NSObject;
@protocol OS_dispatch_group;

@interface WFContentAlertButton : WFSelectableAlertButton

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WFContentItem *contentItem;
@property (readonly, nonatomic) char hasContentSubtitle;
@property (nonatomic) char hideSubtitle;

+ (id)buttonWithContentItem:(id)a0 selected:(char)a1 stickySelection:(char)a2 handler:(id /* block */)a3;
+ (void)processContentAlertButtonSubtitles:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (char)addSubtitleCompletionHandler:(id /* block */)a0;
- (void)getSubtitle:(id /* block */)a0;

@end
