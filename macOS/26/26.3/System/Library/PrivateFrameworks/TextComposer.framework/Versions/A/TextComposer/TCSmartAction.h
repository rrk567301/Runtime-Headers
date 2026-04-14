@class NSString;
@protocol TCSmartActionMetadata;

@interface TCSmartAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) id<TCSmartActionMetadata> actionMetadata;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)requiresFollowUp;
- (id)extractFinalResult:(id *)a0;
- (id)initWithSmartActionMetadata:(id)a0;

@end
