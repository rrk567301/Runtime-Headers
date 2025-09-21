@class NSString, NSData;

@interface SGRealtimeWalletOrder : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *walletOrderDictData;
@property (readonly, nonatomic) NSData *walletOrderData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initRealtimeWalletOrderForState:(int)a0 identifier:(id)a1 walletOrderDictionary:(id)a2 walletOrderData:(id)a3;
- (char)isEqualToRealtimeWalletOrder:(id)a0;
- (id)walletOrderDictionary;

@end
