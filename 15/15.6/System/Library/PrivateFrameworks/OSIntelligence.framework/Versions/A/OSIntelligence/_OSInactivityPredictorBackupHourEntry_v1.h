@interface _OSInactivityPredictorBackupHourEntry_v1 : _OSInactivityPredictorBackupHourEntry

@property (nonatomic) int count;

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
