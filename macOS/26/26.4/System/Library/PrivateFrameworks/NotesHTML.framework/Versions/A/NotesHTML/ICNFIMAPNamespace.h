@class NSString, NSArray;

@interface ICNFIMAPNamespace : NSObject

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *separator;
@property (copy, nonatomic) NSArray *extensions;

- (void).cxx_destruct;
- (id)description;

@end
