@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (void).cxx_destruct;
- (long long)state;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)identifier;
- (void)setState:(long long)a0;
- (BOOL)visible;
- (BOOL)canBeDisabled;
- (BOOL)startSelected;
- (id)packageReferencesToInstall;
- (id)choice;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)initWithChoiceItems:(id)a0 title:(id)a1 identifier:(id)a2 canBeDisabled:(BOOL)a3;

@end
