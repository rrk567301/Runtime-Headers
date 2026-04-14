@class NSMutableArray;
@protocol CNKeyDescriptor;

@interface IMDContactCacheFetchBucket : NSObject

@property (readonly, nonatomic) id<CNKeyDescriptor> additionalKeyDescriptor;
@property (readonly, nonatomic) NSMutableArray *addresses;

- (void).cxx_destruct;
- (id)initWithAdditionalKeyDescriptor:(id)a0;

@end
