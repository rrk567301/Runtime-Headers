@class NSArray, W5LogItemRequest, NSDictionary;

@interface W5LogItemReceipt : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) W5LogItemRequest *request;
@property (copy, nonatomic) NSArray *relativeURLs;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) double startedAt;
@property (nonatomic) double completedAt;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToLogItemReceipt:(id)a0;

@end
