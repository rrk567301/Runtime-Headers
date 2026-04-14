@class NSURL;

@interface IKScanResult : NSObject

@property (copy) NSURL *url;

- (id)imageRepresentation;
- (id)imageUID;
- (id)imageRepresentationType;

@end
