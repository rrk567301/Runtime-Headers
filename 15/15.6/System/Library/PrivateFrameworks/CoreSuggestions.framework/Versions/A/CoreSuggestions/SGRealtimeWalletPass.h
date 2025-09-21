@class NSString, NSData;

@interface SGRealtimeWalletPass : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *walletPassDictionaryData;
@property (readonly, nonatomic) NSData *walletPassData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initRealtimeWalletPassForState:(int)a0 identifier:(id)a1 walletPassDictionary:(id)a2 walletPassData:(id)a3;
- (char)isEqualToRealtimeWalletPass:(id)a0;
- (id)walletPassDictionary;

@end
