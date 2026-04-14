@interface _OSInactivityPredictorBackupHourEntry_v2 : _OSInactivityPredictorBackupHourEntry

@property (nonatomic) double pctLong;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
