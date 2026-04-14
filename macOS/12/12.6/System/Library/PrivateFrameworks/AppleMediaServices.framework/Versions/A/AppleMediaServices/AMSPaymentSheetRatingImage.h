@class NSString;

@interface AMSPaymentSheetRatingImage : NSObject

@property (readonly, copy) NSString *localAssetName;
@property (readonly) long long ratingType;
@property (readonly, getter=isServerSupplied) BOOL serverSupplied;
@property (readonly) BOOL tint;
@property (readonly, copy) NSString *URLString;
@property (readonly, copy) NSString *value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithURLString:(id)a0;
- (long long)_ratingTypeForType:(id)a0;

@end
