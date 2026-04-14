@class BMEventBase;

@interface SearchUIBiomeEvent : BMEventBase <SearchUIBiomeBoolEvent>

@property (retain, nonatomic) BMEventBase *biomeEvent;

+ (id)eventForEvent:(id)a0 contextualAction:(id)a1;
+ (BOOL)supportsEvent:(id)a0 contextualAction:(id)a1;

- (void).cxx_destruct;
- (void)getEnabledStatusWithCompletion:(id /* block */)a0;
- (id)initWithEvent:(id)a0 contextualAction:(id)a1;

@end
