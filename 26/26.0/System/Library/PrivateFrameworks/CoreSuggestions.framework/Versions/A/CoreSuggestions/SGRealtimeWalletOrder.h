@class NSString, NSData;

@interface SGRealtimeWalletOrder : NSObject <SGRealtimeSuggestion_Private, NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *walletOrderDictData;
@property (readonly, nonatomic) NSData *walletOrderData;
@property (nonatomic) int extractionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initRealtimeWalletOrderForState:(int)a0 identifier:(id)a1 walletOrderDictionary:(id)a2 walletOrderData:(id)a3;
- (BOOL)isEqualToRealtimeWalletOrder:(id)a0;
- (id)walletOrderDictionary;

@end
