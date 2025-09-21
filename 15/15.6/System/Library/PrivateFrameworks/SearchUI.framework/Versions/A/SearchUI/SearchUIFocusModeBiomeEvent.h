@class NSString, BMUserFocusModeComputed;

@interface SearchUIFocusModeBiomeEvent : SearchUIBiomeEvent

@property (retain, nonatomic) BMUserFocusModeComputed *biomeEvent;
@property (retain, nonatomic) NSString *observedFocusModeIdentifier;

+ (char)supportsEvent:(id)a0 contextualAction:(id)a1;

- (void).cxx_destruct;
- (void)getEnabledStatusWithCompletion:(id /* block */)a0;
- (id)initWithEvent:(id)a0 contextualAction:(id)a1;

@end
