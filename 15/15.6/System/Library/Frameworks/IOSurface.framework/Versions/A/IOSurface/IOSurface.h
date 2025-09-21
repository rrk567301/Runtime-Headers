@interface IOSurface : NSObject <NSSecureCoding> {
    void *_impl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long allocationSize;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) void *baseAddress;
@property (readonly) unsigned int pixelFormat;
@property (readonly) long long bytesPerRow;
@property (readonly) long long bytesPerElement;
@property (readonly) long long elementWidth;
@property (readonly) long long elementHeight;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned int seed;
@property (readonly) unsigned long long planeCount;
@property (readonly, getter=isInUse) char inUse;
@property (readonly) int localUseCount;
@property (readonly) char allowsPixelSizeCasting;

+ (id)bs_IOSurfaceWithWidth:(long long)a0 height:(long long)a1 options:(unsigned long long *)a2;
+ (unsigned int)numberOfUseCountCategories;

- (id)CGImageBuilder;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)protectionOptions;
- (unsigned long long)registryID;
- (id)initWithMachPort:(unsigned int)a0;
- (id)attachmentForKey:(id)a0;
- (id)initWithProperties:(id)a0;
- (int)lockWithOptions:(unsigned int)a0 seed:(unsigned int *)a1;
- (void)setAttachment:(id)a0 forKey:(id)a1;
- (void)setTimestamp:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)timestampAtIndex:(unsigned long long)a0;
- (int)unlockWithOptions:(unsigned int)a0 seed:(unsigned int *)a1;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (unsigned long long)traceID;
- (id)allAttachments;
- (void *)baseAddressOfPlaneAtIndex:(unsigned long long)a0;
- (long long)bytesPerElementOfPlaneAtIndex:(unsigned long long)a0;
- (long long)bytesPerRowOfPlaneAtIndex:(unsigned long long)a0;
- (void)decrementUseCountForCategory:(unsigned int)a0;
- (long long)elementHeightOfPlaneAtIndex:(unsigned long long)a0;
- (long long)elementWidthOfPlaneAtIndex:(unsigned long long)a0;
- (long long)heightOfPlaneAtIndex:(unsigned long long)a0;
- (void)incrementUseCountForCategory:(unsigned int)a0;
- (id)initWithClientBuffer:(struct __IOSurfaceClient { } *)a0;
- (id)initWithSurfaceID:(unsigned int)a0;
- (char)isDisplayable;
- (char)isInUseForAnyOtherCategory:(unsigned int)a0;
- (char)isInUseForCategory:(unsigned int)a0;
- (char)isSysMemOnly;
- (id)newChildSurfaceWithProperties:(id)a0;
- (id)newWiringAssertion;
- (void)removeAllAttachments;
- (void)removeAttachmentForKey:(id)a0;
- (void)setAllAttachments:(id)a0;
- (int)setPurgeable:(unsigned int)a0 oldState:(unsigned int *)a1;
- (char)supportsProtectionOptions:(unsigned long long)a0;
- (long long)widthOfPlaneAtIndex:(unsigned long long)a0;

@end
