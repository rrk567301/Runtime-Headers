@class NSDate;

@interface CADEventEntityWrapper : CADEntityWrapper {
    double _occurrenceDate;
}

@property (readonly, nonatomic) NSDate *nextReminderOccurrenceDate;

+ (BOOL)supportsSecureCoding;

- (id)occurrenceDate;
- (id)initWithCalEntity:(void *)a0 loadedValues:(id)a1 occurrenceDate:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
