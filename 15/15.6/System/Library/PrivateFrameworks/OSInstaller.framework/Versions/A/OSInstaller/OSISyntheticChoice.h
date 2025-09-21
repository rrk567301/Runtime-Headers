@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem {
    char _enabled;
    char _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (char)enabled;
- (void).cxx_destruct;
- (id)identifier;
- (void)setEnabled:(char)a0;
- (long long)state;
- (void)setState:(long long)a0;
- (char)canBeDisabled;
- (char)visible;
- (id)choice;
- (id)packageReferencesToInstall;
- (char)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)initWithChoiceItems:(id)a0 title:(id)a1 identifier:(id)a2 canBeDisabled:(char)a3;

@end
