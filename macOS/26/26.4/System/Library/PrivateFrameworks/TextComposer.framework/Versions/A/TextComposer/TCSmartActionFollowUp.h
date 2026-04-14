@class NSString, NSDictionary;
@protocol TCSmartActionFollowUpProtocol;

@interface TCSmartActionFollowUp : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSString *actionText;
@property (readonly, copy, nonatomic) id<TCSmartActionFollowUpProtocol> followUp;
@property (readonly, copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithFollowUp:(id)a0;
- (id)initWithFollowUp:(id)a0 options:(id)a1;

@end
