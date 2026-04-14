@class NSString, NSDictionary, WFInterchangeApp, NSURL, NSArray;

@interface WFInterchangeScheme : NSObject

@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, weak, nonatomic) WFInterchangeApp *app;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSURL *universalLinkBaseURL;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) BOOL canLaunchApp;
@property (readonly, nonatomic, getter=isCallbackScheme) BOOL callbackScheme;
@property (readonly, nonatomic) NSString *callbackSourceNameKey;
@property (readonly, nonatomic) NSString *callbackSuccessURLKey;
@property (readonly, nonatomic) NSString *callbackCancelURLKey;
@property (readonly, nonatomic) NSString *callbackErrorURLKey;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;

- (BOOL)matchesURL:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDefinition:(id)a0 app:(id)a1;

@end
