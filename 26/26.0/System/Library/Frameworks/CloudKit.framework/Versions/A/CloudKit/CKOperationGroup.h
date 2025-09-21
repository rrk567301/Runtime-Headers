@class CKOperationGroupSystemImposedInfo, NSString, CKOperationConfiguration, NSNumber;

@interface CKOperationGroup : NSObject <NSSecureCoding, NSCopying> {
    CKOperationGroupSystemImposedInfo *_systemImposedInfo_locked;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKOperationGroupSystemImposedInfo *systemImposedInfo;
@property (copy) NSNumber *quantityNumber;
@property (copy) NSString *authPromptReason;
@property (readonly, nonatomic) long long approximateSendBytes;
@property (readonly, nonatomic) long long approximateReceiveBytes;
@property (readonly, copy, nonatomic) NSString *operationGroupID;
@property (copy) CKOperationConfiguration *defaultConfiguration;
@property (copy) NSString *name;
@property unsigned long long quantity;
@property long long expectedSendSize;
@property long long expectedReceiveSize;

+ (void)initialize;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)resolvedNetworkServiceTypeForConfig:(id)a0;

@end
