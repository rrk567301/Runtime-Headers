@class NSURL, NSUUID;

@interface CUNFCDevice : NSObject

@property (copy, nonatomic) NSURL *advertisedURI;
@property (copy, nonatomic) NSUUID *identifier;

- (void).cxx_destruct;

@end
