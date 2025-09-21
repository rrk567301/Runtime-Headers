@class NSString, NSDictionary;

@interface BMContextualActionContent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSDictionary *contentMetadata;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0 metadata:(id)a1;

@end
