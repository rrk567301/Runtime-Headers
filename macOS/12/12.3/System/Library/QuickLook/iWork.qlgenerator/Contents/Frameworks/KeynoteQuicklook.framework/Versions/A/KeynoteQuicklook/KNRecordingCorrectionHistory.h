@interface KNRecordingCorrectionHistory : NSObject <NSCopying>

@property (readonly, nonatomic) KNRecordingCorrectionHistory *correctionHistoryWithAddedMissingEventsForRadar49654305;
@property (readonly, nonatomic) BOOL didAddMissingEventsForRadar49654305;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;

@end
