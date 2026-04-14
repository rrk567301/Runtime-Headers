@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand>

@property (readonly, nonatomic) unsigned long long changeItemSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextItem;
- (id)previousItem;
- (id)previousChapter;
- (id)previousSection;
- (id)changeToItem:(id)a0;
- (id)changeToSection:(id)a0;
- (id)initWithResponse:(id)a0 changeItemSupport:(unsigned long long)a1;
- (id)nextChapter;
- (id)nextSection;
- (id)previousItemDeferringToPlaybackQueuePosition;

@end
