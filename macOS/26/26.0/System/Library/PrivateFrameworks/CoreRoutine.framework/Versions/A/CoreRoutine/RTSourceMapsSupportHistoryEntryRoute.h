@interface RTSourceMapsSupportHistoryEntryRoute : RTSourceMapsSupportHistoryEntry

@property (readonly, nonatomic) BOOL navigationWasInterrupted;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithUsageDate:(id)a0 navigationWasInterrupted:(BOOL)a1;

@end
