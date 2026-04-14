@class MusicKit_SoftLinking_MPModelObject, NSString, MPModelGenericObject;

@interface MusicKit_SoftLinking_MPModelStoreBrowseContentItem : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject> {
    MPModelGenericObject *_underlyingItem;
}

@property (readonly, nonatomic) MPModelGenericObject *_underlyingObject;
@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *innerObject;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_genericObjectTypeForItemType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithInnerObject:(id)a0;

@end
