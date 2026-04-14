@interface KHDBOpenableModel : KHDBUuidModel {
    unsigned long long _openChangesMask;
}

- (BOOL)isOpen;
- (void)setIsOpen:(BOOL)a0;
- (void)open;
- (void)close;
- (void)includeInOpenChanges:(unsigned long long)a0;
- (unsigned long long)setToClosed;

@end
