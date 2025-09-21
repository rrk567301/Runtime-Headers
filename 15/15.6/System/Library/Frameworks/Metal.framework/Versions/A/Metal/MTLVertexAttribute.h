@class NSString;

@interface MTLVertexAttribute : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long attributeIndex;
@property (readonly) unsigned long long attributeType;
@property (readonly, getter=isActive) char active;
@property (readonly, getter=isPatchData) char patchData;
@property (readonly, getter=isPatchControlPointData) char patchControlPointData;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;


@end
