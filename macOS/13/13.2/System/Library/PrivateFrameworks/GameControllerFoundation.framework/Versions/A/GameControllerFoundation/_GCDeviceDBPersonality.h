@class GCVersion, NSPredicate, GCGenericDeviceModel, NSURL;

@interface _GCDeviceDBPersonality : NSObject <NSCopying> {
    NSURL *_url;
}

@property (readonly, copy) GCVersion *compatibilityVersion;
@property (readonly, copy) NSPredicate *ioMatchingPredicate;
@property (readonly, copy) GCGenericDeviceModel *model;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(out id *)a1;
- (id)initWithDictionary:(id)a0 error:(out id *)a1;

@end
