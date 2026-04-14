@class NSString, CCResource;

@interface CCRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) CCResource *attachedResource;
@property (retain, nonatomic) NSString *attachedKey;

- (BOOL)isEqualToDescriptor:(id)a0;
- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
