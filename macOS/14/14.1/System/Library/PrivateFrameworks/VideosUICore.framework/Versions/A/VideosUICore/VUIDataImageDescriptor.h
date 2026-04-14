@class NSData;

@interface VUIDataImageDescriptor : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic, getter=isTemplated) BOOL templated;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
