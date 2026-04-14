@class NSString;

@interface CHSWidgetDescriptorsPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, nonatomic) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) CHSWidgetDescriptorsPredicate *visible;

@property (nonatomic) long long remoteWidgetInclusions;
@property (nonatomic) BOOL includeRelevanceBacked;
@property (nonatomic) BOOL includeRemote;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initIncludingRelevanceBacked:(BOOL)a0;

@end
