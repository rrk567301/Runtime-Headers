@class NSString, TKSmartCard, NSData, TKSmartCardPINFormat;

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation

@property (copy) NSString *localizedPINLabel;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (copy) NSData *APDUTemplate;
@property long long PINByteOffset;
@property (retain) TKSmartCard *smartCard;
@property (copy) NSString *PIN;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)finishWithError:(id *)a0;
- (Class)baseClassForUI;
- (void)importOperation:(id)a0;

@end
