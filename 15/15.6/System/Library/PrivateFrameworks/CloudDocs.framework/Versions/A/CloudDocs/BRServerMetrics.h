@class NSNumber;

@interface BRServerMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *quotaUsed;
@property (retain, nonatomic) NSNumber *recursiveChildCount;
@property (retain, nonatomic) NSNumber *sharedByMeRecursiveCount;
@property (retain, nonatomic) NSNumber *sharedAliasRecursiveCount;
@property (retain, nonatomic) NSNumber *childCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)initWithServerMetrics:(id)a0;

@end
