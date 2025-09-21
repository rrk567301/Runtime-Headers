@class NSString, NSDictionary, ICApp, NSURL, NSArray;

@interface ICScheme : NSObject

@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, weak, nonatomic) ICApp *app;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSURL *universalLinkBaseURL;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) char canLaunchApp;
@property (readonly, nonatomic, getter=isCallbackScheme) char callbackScheme;
@property (readonly, nonatomic) NSString *callbackSourceNameKey;
@property (readonly, nonatomic) NSString *callbackSuccessURLKey;
@property (readonly, nonatomic) NSString *callbackCancelURLKey;
@property (readonly, nonatomic) NSString *callbackErrorURLKey;
@property (readonly, nonatomic, getter=isAvailable) char available;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)matchesURL:(id)a0;
- (id)initWithDefinition:(id)a0 app:(id)a1;

@end
