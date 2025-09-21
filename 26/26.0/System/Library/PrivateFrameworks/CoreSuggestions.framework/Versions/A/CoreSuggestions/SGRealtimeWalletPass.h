@class NSString, NSData;

@interface SGRealtimeWalletPass : NSObject <SGRealtimeSuggestion_Private, NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *walletPassDictionaryData;
@property (readonly, nonatomic) NSData *walletPassData;
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
- (id)initRealtimeWalletPassForState:(int)a0 identifier:(id)a1 walletPassDictionary:(id)a2 walletPassData:(id)a3;
- (BOOL)isEqualToRealtimeWalletPass:(id)a0;
- (id)walletPassDictionary;

@end
