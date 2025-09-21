@class ATXSuggestedPagesTunableConstants;

@interface ATXSuggestedPagesContactsWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource> {
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

- (id)_createMediumContactsWidgetForPeople:(id)a0 entities:(id)a1;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)init;
- (id)_createSmallContactsWidgetForPeople:(id)a0;
- (void).cxx_destruct;

@end
