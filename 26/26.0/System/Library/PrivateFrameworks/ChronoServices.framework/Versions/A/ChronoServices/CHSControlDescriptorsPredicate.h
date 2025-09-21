@class NSString;

@interface CHSControlDescriptorsPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, nonatomic) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) CHSControlDescriptorsPredicate *visible;
@property (class, nonatomic, readonly) CHSControlDescriptorsPredicate *hidden;
@property (class, nonatomic, readonly) CHSControlDescriptorsPredicate *all;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL includeHidden;
@property (nonatomic, readonly) BOOL includeVisible;
@property (nonatomic) BOOL includeRemote;
@property (nonatomic) BOOL includeOnlyRemoteEligible;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initIncludingVisible:(BOOL)a0 hidden:(BOOL)a1;

@end
