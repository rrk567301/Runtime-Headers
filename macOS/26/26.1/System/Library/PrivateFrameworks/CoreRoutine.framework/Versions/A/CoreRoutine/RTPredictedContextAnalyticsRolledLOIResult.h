@class NSUUID;

@interface RTPredictedContextAnalyticsRolledLOIResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL loiIsMissingFromCurrentVisitHistory;
@property (readonly, nonatomic) BOOL isHome;
@property (readonly, nonatomic) BOOL isWork;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 loiIsMissingFromCurrentVisitHistory:(BOOL)a1 isHome:(BOOL)a2 isWork:(BOOL)a3;

@end
