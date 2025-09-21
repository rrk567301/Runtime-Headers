@class NSString;

@interface APLocationInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *locality;
@property (retain) NSString *administrativeArea;
@property (retain) NSString *subAdministrativeArea;
@property (retain) NSString *isoCountryCode;
@property (retain) NSString *postalCode;

- (id)description;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAPLocationInfo:(id)a0;
- (id)jsonRepresentationWithOptions:(unsigned long long)a0;

@end
