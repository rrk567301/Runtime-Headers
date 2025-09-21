@class NSString;
@protocol TCSmartActionMetadata;

@interface TCSmartAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) id<TCSmartActionMetadata> actionMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresFollowUp;
- (id)extractFinalResult:(id *)a0;
- (id)initWithSmartActionMetadata:(id)a0;

@end
