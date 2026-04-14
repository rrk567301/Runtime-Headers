@class NSString, ATXWidget, NSSet;

@interface ATXWidgetStackSuggestion : NSObject {
    void /* function */ stackIdentifier;
    void /* function */ suggestedWidgets;
}

@property (nonatomic, readonly) NSString *stackIdentifier;
@property (nonatomic, readonly) ATXWidget *topWidget;
@property (nonatomic, readonly) NSSet *suggestedWidgets;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStackIdentifier:(id)a0 topWidget:(id)a1 suggestedWidgets:(id)a2;

@end
