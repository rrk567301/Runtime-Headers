@class NSArray, NSString, APLocationInfo, NSNumber;
@protocol APClientInfoDelegate;

@interface APClientInfo : NSObject <NSSecureCoding>

@property (class, retain, nonatomic) APClientInfo *activeClientInfo;
@property (class, weak, nonatomic) id<APClientInfoDelegate> delegate;
@property (class, readonly) BOOL supportsSecureCoding;

@property long long orientation;
@property long long interfaceIdiom;
@property long long screenHeight;
@property long long screenWidth;
@property (retain) NSNumber *scale;
@property (retain) NSArray *keyboards;
@property (retain) APLocationInfo *locationInfo;
@property (retain) NSString *appVersion;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentationWithOptions:(unsigned long long)a0;
- (id)nonUICopy;
- (void)updateActiveClientInfo;

@end
