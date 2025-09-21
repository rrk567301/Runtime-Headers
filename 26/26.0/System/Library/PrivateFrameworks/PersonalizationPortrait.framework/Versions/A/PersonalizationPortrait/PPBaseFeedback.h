@class NSString, NSArray, NSDate;

@interface PPBaseFeedback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSArray *feedbackItems;
@property (readonly, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) NSString *mappingId;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly) BOOL isMapped;

- (id)initWithFeedbackItems:(id)a0 timestamp:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeedbackItems:(id)a0 mappingId:(id)a1;
- (BOOL)isEqualToPPBaseFeedback:(id)a0;

@end
