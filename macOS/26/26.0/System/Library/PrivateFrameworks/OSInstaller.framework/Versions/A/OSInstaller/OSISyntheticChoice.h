@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (BOOL)visible;
- (void)setState:(long long)a0;
- (long long)state;
- (id)identifier;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (void).cxx_destruct;
- (BOOL)canBeDisabled;
- (id)choice;
- (id)packageReferencesToInstall;
- (BOOL)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)initWithChoiceItems:(id)a0 title:(id)a1 identifier:(id)a2 canBeDisabled:(BOOL)a3;

@end
