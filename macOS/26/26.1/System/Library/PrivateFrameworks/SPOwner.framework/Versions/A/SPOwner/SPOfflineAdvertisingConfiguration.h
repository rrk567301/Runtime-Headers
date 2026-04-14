@interface SPOfflineAdvertisingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long shortIntervalCount;
@property (nonatomic) long long longIntervalCount;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithShortIntervalCount:(long long)a0 longIntervalCount:(long long)a1;

@end
