@class NSString;

@interface ActivityUIServices.ActivityEdgeInsets : NSObject <NSCopying, NSSecureCoding, BSXPCSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double top;
@property (nonatomic) double leading;
@property (nonatomic) double bottom;
@property (nonatomic) double trailing;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTop:(double)a0 leading:(double)a1 bottom:(double)a2 trailing:(double)a3;

@end
