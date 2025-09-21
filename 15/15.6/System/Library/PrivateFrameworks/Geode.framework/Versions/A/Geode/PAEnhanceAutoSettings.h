@interface PAEnhanceAutoSettings : IPAAutoSettings

@property (nonatomic) double vibrance;
@property (nonatomic) char isNoOp;

- (char)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
