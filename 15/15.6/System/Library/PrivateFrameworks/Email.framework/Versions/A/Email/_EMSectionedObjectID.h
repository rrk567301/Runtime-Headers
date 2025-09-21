@class NSString, EMObjectID;
@protocol NSObject, NSCopying;

@interface _EMSectionedObjectID : EMObjectID <EFCacheable, EMSectionedObjectID>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSObject, NSCopying> sectionID;
@property (readonly, nonatomic) EMObjectID *underlyingObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cachedSelf;
- (id)collectionItemID;
- (id)initWithObjectID:(id)a0 sectionID:(id)a1;

@end
