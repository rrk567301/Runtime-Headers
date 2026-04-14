@class NSString, IDSMessageContext, NSDate;

@interface IMTrackedReadReceipt : NSObject {
    void /* function */ messageGUID;
    void /* function */ fromIdentifier;
}

@property (nonatomic, readonly) NSString *messageGUID;
@property (nonatomic, readonly) unsigned long long messageDateTS;
@property (nonatomic, readonly) unsigned long long readDateTS;
@property (nonatomic, readonly) NSString *fromIdentifier;
@property (nonatomic, readonly) BOOL isFromMe;
@property (nonatomic, readonly) long long receiptVersion;
@property (nonatomic, readonly) BOOL hadQOI;
@property (nonatomic, readonly) BOOL wantsDeliveryReceipt;
@property (nonatomic, readonly) IDSMessageContext *messageContext;
@property (nonatomic, readonly) NSDate *messageDate;
@property (nonatomic, readonly) NSDate *readDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessageGUID:(id)a0 messageDateTS:(unsigned long long)a1 readDateTS:(unsigned long long)a2 fromIdentifier:(id)a3 isFromMe:(BOOL)a4 receiptVersion:(long long)a5 hadQOI:(BOOL)a6 wantsDeliveryReceipt:(BOOL)a7 messageContext:(id)a8;

@end
