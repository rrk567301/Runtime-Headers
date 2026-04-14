@class NSString;

@interface AMSPaymentSheetSymbolAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration>

@property (readonly, copy) NSString *accessibilityText;
@property (readonly, copy) NSString *name;
@property (readonly) long long scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 accessibilityText:(id)a1 scale:(long long)a2;

@end
