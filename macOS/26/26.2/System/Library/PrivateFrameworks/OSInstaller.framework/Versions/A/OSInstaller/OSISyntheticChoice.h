@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (BOOL)visible;
- (id)identifier;
- (long long)state;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)enabled;
- (void)setState:(long long)a0;
- (BOOL)canBeDisabled;
- (id)choice;
- (id)packageReferencesToInstall;
- (BOOL)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)initWithChoiceItems:(id)a0 title:(id)a1 identifier:(id)a2 canBeDisabled:(BOOL)a3;

@end
