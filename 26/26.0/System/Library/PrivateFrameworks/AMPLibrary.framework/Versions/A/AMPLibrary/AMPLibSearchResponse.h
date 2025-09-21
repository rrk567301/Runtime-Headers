@class NSDictionary;

@interface AMPLibSearchResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *scopeTypeToMediaItemsMap;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithScopeTypeToMediaItemsMap:(id)a0;

@end
