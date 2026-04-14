@class NSNumber, NSString;

@interface PREMultiHeadPredictionItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSString *label;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScore:(id)a0 label:(id)a1;

@end
