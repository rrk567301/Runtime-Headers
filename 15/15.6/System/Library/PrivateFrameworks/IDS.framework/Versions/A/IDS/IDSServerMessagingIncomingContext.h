@class NSString, NSDictionary, IDSCertifiedDeliveryContext, NSNumber;

@interface IDSServerMessagingIncomingContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *additionalTopLevelFields;
@property (nonatomic) char fromServerStorage;
@property (retain, nonatomic) IDSCertifiedDeliveryContext *certifiedDeliveryContext;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *command;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFromServerStorage:(char)a0 certifiedDeliveryContext:(id)a1 command:(id)a2 identifier:(id)a3 additionalTopLevelFields:(id)a4;
- (id)initWithFromServerStorage:(char)a0 certifiedDeliveryContext:(id)a1 identifier:(id)a2;

@end
