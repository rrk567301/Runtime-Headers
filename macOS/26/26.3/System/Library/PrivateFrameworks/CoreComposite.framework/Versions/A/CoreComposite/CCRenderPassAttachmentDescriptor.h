@class NSString, CCResource;

@interface CCRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) CCResource *attachedResource;
@property (retain, nonatomic) NSString *attachedKey;

- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)isEqualToDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
