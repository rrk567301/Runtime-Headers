@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (BOOL)enabled;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (BOOL)visible;
- (id)identifier;
- (long long)state;
- (BOOL)canBeDisabled;
- (id)choice;
- (id)packageReferencesToInstall;
- (BOOL)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)initWithChoiceItems:(id)a0 title:(id)a1 identifier:(id)a2 canBeDisabled:(BOOL)a3;

@end
