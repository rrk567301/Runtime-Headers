@interface KHDBOpenableModel : KHDBUuidModel {
    unsigned long long _openChangesMask;
}

- (void)setIsOpen:(BOOL)a0;
- (void)open;
- (BOOL)isOpen;
- (void)close;
- (void)includeInOpenChanges:(unsigned long long)a0;
- (unsigned long long)setToClosed;

@end
