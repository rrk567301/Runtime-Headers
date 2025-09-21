@class SPSearchResultMarker;

@interface SPAdvertisementCacheSearchCriteria : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
