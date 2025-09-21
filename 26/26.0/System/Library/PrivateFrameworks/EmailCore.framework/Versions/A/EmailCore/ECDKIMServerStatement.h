@class NSString;

@interface ECDKIMServerStatement : NSObject

@property (nonatomic) long long dkimServerResult;
@property (copy, nonatomic) NSString *dkimServerSigningDomain;
@property (copy, nonatomic) NSString *dkimServerResultSelector;

- (void).cxx_destruct;

@end
