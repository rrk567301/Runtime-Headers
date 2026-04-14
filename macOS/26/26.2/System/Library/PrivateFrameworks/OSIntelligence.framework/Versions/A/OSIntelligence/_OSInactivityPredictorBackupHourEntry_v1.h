@interface _OSInactivityPredictorBackupHourEntry_v1 : _OSInactivityPredictorBackupHourEntry

@property (nonatomic) int count;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
