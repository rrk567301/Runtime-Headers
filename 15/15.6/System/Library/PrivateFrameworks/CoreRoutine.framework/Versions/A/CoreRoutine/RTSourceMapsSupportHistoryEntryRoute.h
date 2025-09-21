@interface RTSourceMapsSupportHistoryEntryRoute : RTSourceMapsSupportHistoryEntry

@property (readonly, nonatomic) char navigationWasInterrupted;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUsageDate:(id)a0 navigationWasInterrupted:(char)a1;

@end
