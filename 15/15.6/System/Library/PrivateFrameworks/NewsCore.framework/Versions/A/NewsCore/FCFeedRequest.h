@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) FCFeedRange *feedRange;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) char isExpendable;
@property (nonatomic) char cachedOnly;
@property (copy, nonatomic) FCFeedItemFeature *requiredFeature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeedID:(id)a0 feedRange:(id)a1 maxCount:(unsigned long long)a2 isExpendable:(char)a3 cachedOnly:(char)a4 requiredFeature:(id)a5;

@end
