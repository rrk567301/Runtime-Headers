@class NSNumber, SPSearchResultMarker;

@interface SPBeaconPayloadCacheSearchCriteria : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;
@property (copy, nonatomic) NSNumber *fetchLimit;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
