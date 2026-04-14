@class NSSet;

@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest

@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSSet *objectIDsToSerialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;

@end
