@class NSString, NSNumber, NSDictionary;

@interface IDSRegistrationAuthenticateMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) unsigned int connectionType;
@property (readonly, nonatomic) unsigned int resultCode;
@property (readonly, nonatomic) unsigned int registrationError;
@property (readonly, nonatomic) char isPhoneUser;
@property (readonly, nonatomic) char isDSUser;
@property (readonly, nonatomic) NSNumber *genericError;
@property (readonly, nonatomic) NSNumber *URLError;
@property (readonly, nonatomic) NSNumber *POSIXError;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 success:(char)a1 connectionType:(unsigned int)a2 resultCode:(unsigned int)a3 registrationError:(unsigned int)a4 isPhoneUser:(char)a5 isDSUser:(char)a6 genericError:(id)a7 URLError:(id)a8 POSIXError:(id)a9;

@end
