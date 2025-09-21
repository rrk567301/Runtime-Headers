@class NSArray, NSString, APLocationInfo, NSNumber;
@protocol APClientInfoDelegate;

@interface APClientInfo : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) APClientInfo *activeClientInfo;
@property (class, weak, nonatomic) id<APClientInfoDelegate> delegate;
@property (class, readonly) BOOL isActiveClientInfoSet;
@property (class, readonly) BOOL supportsSecureCoding;

@property long long orientation;
@property long long interfaceIdiom;
@property long long screenHeight;
@property long long screenWidth;
@property (retain) NSNumber *scale;
@property (retain) NSArray *keyboards;
@property (retain) APLocationInfo *locationInfo;
@property (nonatomic) BOOL isLocationAvailableForAd;
@property (retain) NSString *appVersion;

+ (void)setActiveClientInfo:(id)a0;

- (id)jsonRepresentationWithOptions:(unsigned long long)a0;
- (id)nonUICopy;
- (void)encodeWithCoder:(id)a0;
- (void)updateActiveClientInfo;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
