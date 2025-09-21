@class NSString;

@interface HMMMMessageDestination : NSObject

@property (readonly, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) NSString *idsTokenURI;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithIDSIdentifier:(id)a0 idsTokenURI:(id)a1;

@end
