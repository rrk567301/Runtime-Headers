@class NSArray;

@interface ATXWidgetSuggestionsDenyList : NSObject {
    NSArray *_bannedWidgets;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssets:(id)a0;
- (BOOL)containsInfoSuggestion:(id)a0;

@end
