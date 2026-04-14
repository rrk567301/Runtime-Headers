@class NSString, NSArray;

@interface IMAPNamespaceExtension : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *flags;

- (void).cxx_destruct;
- (id)description;

@end
