@class ATXSuggestedPagesTunableConstants;

@interface ATXSuggestedPagesContactsWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource> {
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

- (id)_createMediumContactsWidgetForPeople:(id)a0 entities:(id)a1;
- (void).cxx_destruct;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)init;
- (id)_createSmallContactsWidgetForPeople:(id)a0;

@end
