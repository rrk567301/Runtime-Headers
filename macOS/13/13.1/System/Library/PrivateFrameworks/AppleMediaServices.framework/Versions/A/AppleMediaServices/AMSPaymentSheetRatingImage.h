@class NSString;

@interface AMSPaymentSheetRatingImage : NSObject

@property (readonly, copy) NSString *localAssetName;
@property (readonly, nonatomic) long long ratingType;
@property (readonly, nonatomic, getter=isServerSupplied) BOOL serverSupplied;
@property (readonly, nonatomic) BOOL tint;
@property (readonly, copy) NSString *URLString;
@property (readonly, copy) NSString *value;

+ (id)textEncapsulationForServerValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithURLString:(id)a0;
- (long long)_ratingTypeForType:(id)a0;

@end
