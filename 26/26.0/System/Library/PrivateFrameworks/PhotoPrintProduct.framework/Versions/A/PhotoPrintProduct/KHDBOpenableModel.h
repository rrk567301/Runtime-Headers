@interface KHDBOpenableModel : KHDBUuidModel {
    unsigned long long _openChangesMask;
}

- (BOOL)isOpen;
- (void)open;
- (void)setIsOpen:(BOOL)a0;
- (void)close;
- (void)includeInOpenChanges:(unsigned long long)a0;
- (unsigned long long)setToClosed;

@end
