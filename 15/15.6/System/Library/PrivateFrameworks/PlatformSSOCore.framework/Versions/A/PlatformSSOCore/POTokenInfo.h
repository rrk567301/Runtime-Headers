@class NSString, NSData;

@interface POTokenInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tokenId;
@property (copy, nonatomic) NSData *keyHash;
@property (copy, nonatomic) NSData *wrapHash;
@property (nonatomic) char canLogin;

- (void).cxx_destruct;

@end
