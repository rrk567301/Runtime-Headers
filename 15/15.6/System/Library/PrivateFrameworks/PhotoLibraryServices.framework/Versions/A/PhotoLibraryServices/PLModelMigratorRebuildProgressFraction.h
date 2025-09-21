@interface PLModelMigratorRebuildProgressFraction : NSObject {
    char _legacyRecoveryEnabled;
}

@property (nonatomic, getter=isRebuildEnabled) char rebuildEnabled;
@property (readonly) char isLegacyRecoveryEnabled;

- (id)initWithLegacyRecoveryEnabled:(char)a0;
- (float)progressFractionForType:(unsigned char)a0;

@end
