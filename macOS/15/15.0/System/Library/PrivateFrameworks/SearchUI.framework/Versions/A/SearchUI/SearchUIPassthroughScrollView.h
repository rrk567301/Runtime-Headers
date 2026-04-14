@class NSString;

@interface SearchUIPassthroughScrollView : NSScrollView <SearchUIScrollable>

@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)autohidesScrollers;
- (void)scrollWheel:(id)a0;

@end
