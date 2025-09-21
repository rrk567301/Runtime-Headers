@class NSString;

@interface CHSControlDescriptorsPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, nonatomic) char supportsSecureCoding;
@property (class, nonatomic, readonly) CHSControlDescriptorsPredicate *visible;
@property (class, nonatomic, readonly) CHSControlDescriptorsPredicate *hidden;
@property (class, nonatomic, readonly) CHSControlDescriptorsPredicate *all;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ includeHidden;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ includeVisible;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initIncludingVisible:(char)a0 hidden:(char)a1;

@end
