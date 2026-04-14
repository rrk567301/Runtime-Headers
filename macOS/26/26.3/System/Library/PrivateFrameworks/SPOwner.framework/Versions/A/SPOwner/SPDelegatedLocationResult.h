@class NSDictionary, NSDate;

@interface SPDelegatedLocationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUploadTimestamp;
@property (copy, nonatomic) NSDictionary *locationsByUuids;

- (id)initWithResults:(id)a0;
- (id)initWithTimestamp:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
