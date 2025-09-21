@class NSString;

@interface SearchUIPassthroughScrollView : NSScrollView <SearchUIScrollable>

@property (nonatomic) char scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isCompatibleWithResponsiveScrolling;

- (char)autohidesScrollers;
- (void)scrollWheel:(id)a0;
- (long long)scrollerStyle;

@end
