@interface PAExposureAutoSettings : IPAAutoSettings

@property (nonatomic) double EV;
@property (nonatomic) char isNoOp;

- (char)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
