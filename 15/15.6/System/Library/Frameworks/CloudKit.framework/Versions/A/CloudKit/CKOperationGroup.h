@class CKOperationGroupSystemImposedInfo, NSString, CKOperationConfiguration, NSNumber;

@interface CKOperationGroup : NSObject <NSSecureCoding> {
    CKOperationGroupSystemImposedInfo *_systemImposedInfo_locked;
}

@property (class, readonly) char supportsSecureCoding;

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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (unsigned long long)resolvedNetworkServiceTypeForConfig:(id)a0;

@end
