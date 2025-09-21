@class NSDictionary;

@interface AMPLibSearchResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *scopeTypeToMediaItemsMap;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScopeTypeToMediaItemsMap:(id)a0;

@end
