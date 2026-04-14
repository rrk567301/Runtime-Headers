@class NSDictionary, MPModelObject, NSString;

@interface MusicKit_SoftLinking_MPModelObject : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject> {
    MPModelObject *_underlyingModelObject;
}

@property (readonly, nonatomic) MPModelObject *_underlyingModelObject;
@property (readonly, nonatomic) NSDictionary *storageDictionary;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long libraryRemovalSupportedOptions;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createUnderlyingModelObjectWithIdentifierSet:(id)a0 modelObjectType:(long long)a1 storageDictionary:(id)a2;
+ (long long)keepLocalEnabledStateForRawValue:(long long)a0;
+ (long long)rawValueForKeepLocalEnabledState:(long long)a0;
+ (long long)keepLocalManagedStatusForRawValue:(long long)a0;
+ (long long)rawValueForKeepLocalManagedStatus:(long long)a0;

- (void).cxx_destruct;
- (id)initWithIdentifierSet:(id)a0 modelObjectType:(long long)a1 storageDictionary:(id)a2;
- (id)initWithUnderlyingModelObject:(id)a0;

@end
