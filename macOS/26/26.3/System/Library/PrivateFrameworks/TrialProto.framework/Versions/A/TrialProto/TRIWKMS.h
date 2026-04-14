@class NSString;

@interface TRIWKMS : TRIPBMessage

@property (copy, nonatomic) NSString *authData;
@property (nonatomic) BOOL hasAuthData;

+ (id)descriptor;

@end
