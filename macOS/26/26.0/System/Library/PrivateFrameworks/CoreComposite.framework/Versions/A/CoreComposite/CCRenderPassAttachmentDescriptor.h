@class NSString, CCResource;

@interface CCRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) CCResource *attachedResource;
@property (retain, nonatomic) NSString *attachedKey;

- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualToDescriptor:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
