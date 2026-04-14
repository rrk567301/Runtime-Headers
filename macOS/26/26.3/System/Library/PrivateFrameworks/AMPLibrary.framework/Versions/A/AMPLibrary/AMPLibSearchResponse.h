@class NSDictionary;

@interface AMPLibSearchResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *scopeTypeToMediaItemsMap;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithScopeTypeToMediaItemsMap:(id)a0;

@end
