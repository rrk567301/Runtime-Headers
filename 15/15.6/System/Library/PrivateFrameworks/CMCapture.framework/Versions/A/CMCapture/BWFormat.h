@interface BWFormat : NSObject

@property (readonly) unsigned int mediaType;
@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;

+ (id)formatByResolvingRequirements:(id)a0;
+ (id)formatByResolvingRequirements:(id)a0 printErrors:(char)a1;

@end
