@class SASampleStore;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) SASampleStore *sampleStore;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSampleStore:(id)a0;

@end
