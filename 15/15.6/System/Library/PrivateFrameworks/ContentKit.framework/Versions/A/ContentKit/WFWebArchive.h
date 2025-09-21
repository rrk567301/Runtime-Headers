@class WFWebResource, NSArray, NSData;

@interface WFWebArchive : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFWebResource *mainResource;
@property (readonly, nonatomic) NSArray *subresources;
@property (readonly, nonatomic) NSArray *subframeArchives;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (id)initWithMainResource:(id)a0 subresources:(id)a1 subframeArchives:(id)a2;
- (id)containedImageFiles;

@end
