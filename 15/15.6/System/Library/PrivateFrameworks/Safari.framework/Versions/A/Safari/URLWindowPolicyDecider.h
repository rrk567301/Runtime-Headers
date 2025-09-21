@class NSEvent;

@interface URLWindowPolicyDecider : NSObject

@property (class, nonatomic) char restrictNavigationsToCurrentWebView;

@property (retain, nonatomic) NSEvent *event;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long eventModifierFlags;
@property (nonatomic) char middleMouseButtonWasClicked;
@property (nonatomic) char respectKeyEquivalents;
@property (nonatomic, getter=isForOpeningCloudTab) char forOpeningCloudTab;
@property (nonatomic) char requireCommandKey;
@property (nonatomic) char commandClickCreatesNewTabs;
@property (nonatomic) char newTabsAndWindowsOpenInFront;
@property (nonatomic) char disallowAddToReadingList;
@property (nonatomic) unsigned int navigationType;
@property (copy, nonatomic) id /* block */ shouldNavigateToFavoriteInResponseToKeyEventDecider;

+ (id)defaultDecider;
+ (id)defaultDeciderForCurrentEvent;
+ (id)defaultDeciderForEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)_decidePolicyForNavigationEvent;
- (long long)_decidePolicyForCreatingWindowOrTab;
- (long long)_decidePolicyForStandardEvent;
- (long long)decidePolicy;

@end
