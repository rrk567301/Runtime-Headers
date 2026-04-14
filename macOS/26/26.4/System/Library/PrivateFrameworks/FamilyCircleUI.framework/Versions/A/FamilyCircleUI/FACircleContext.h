@class NSString, NSDictionary, NSData, NSURL, AKAppleIDAuthenticationContext, NSURLSessionConfiguration;

@interface FACircleContext : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (copy, nonatomic) NSURL *urlForContext;
@property (copy, nonatomic) NSString *urlEndpoint;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;
@property (retain, nonatomic) NSDictionary *ephemeralAuthResults;
@property (readonly, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration;
@property (readonly, copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *additionalParameters;
@property (nonatomic) unsigned long long activityIndicatorStyle;

+ (id)contextWithData:(id)a0;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventType:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isPlatformSupported;

@end
