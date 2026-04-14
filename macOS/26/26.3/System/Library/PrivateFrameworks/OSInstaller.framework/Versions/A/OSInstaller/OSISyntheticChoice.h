@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (id)identifier;
- (BOOL)enabled;
- (BOOL)visible;
- (void)setEnabled:(BOOL)a0;
- (long long)state;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (BOOL)canBeDisabled;
- (id)choice;
- (id)packageReferencesToInstall;
- (BOOL)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)initWithChoiceItems:(id)a0 title:(id)a1 identifier:(id)a2 canBeDisabled:(BOOL)a3;

@end
