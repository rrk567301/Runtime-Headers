@class NSString, LAContext, NSData, NSNumber;

@interface LAUIAuthorizationSheetRequest : NSObject

@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long authenticationMethod;
@property (retain, nonatomic) NSNumber *uid;
@property (retain, nonatomic) NSString *pamUsername;
@property (retain, nonatomic) NSString *pamService;
@property (retain, nonatomic) NSData *pamToken;
@property (readonly, nonatomic) LAContext *context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 uid:(id)a1 username:(id)a2;

@end
