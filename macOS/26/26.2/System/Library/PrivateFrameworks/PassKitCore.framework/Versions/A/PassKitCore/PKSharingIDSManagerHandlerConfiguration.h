@class NSString;

@interface PKSharingIDSManagerHandlerConfiguration : NSObject

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accessLevel;
@property (readonly, nonatomic) unsigned long long sharingGroup;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSharingGroup:(unsigned long long)a0;

@end
