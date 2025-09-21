@class NSString;
@protocol TCSmartActionFollowUpProtocol;

@interface TCSmartActionFollowUp : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSString *actionText;
@property (readonly, copy, nonatomic) id<TCSmartActionFollowUpProtocol> followUp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFollowUp:(id)a0;

@end
