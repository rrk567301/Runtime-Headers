@class NSString, NSError;

@interface HPDAuthResult : NSObject

@property (readonly) NSString *username;
@property (readonly) NSString *acSSOToken;
@property (readonly) NSString *oidcToken;
@property (readonly) NSError *error;

+ (id)resultWithError:(id)a0;
+ (id)resultWithValues:(id)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)additionalHeaders;
- (id)_initWithValues:(id)a0 error:(id)a1;

@end
