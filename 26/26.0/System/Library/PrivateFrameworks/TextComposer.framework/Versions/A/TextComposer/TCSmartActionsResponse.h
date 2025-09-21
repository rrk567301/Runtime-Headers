@class NSArray, NSDictionary;

@interface TCSmartActionsResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *responses;
@property (readonly, nonatomic) int inferenceStatus;
@property (readonly, copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponses:(id)a0 inferenceStatus:(int)a1 options:(id)a2;

@end
