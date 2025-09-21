@class NSString, NSArray, NSData, VFXCoreEntityHandle;
@protocol _TtP3VFX10VFXBinding_;

@interface VFXBindingWrapper : NSObject <VFX.VFXBinding, VFXGraphBinding, VFXParameterInfo> {
    id<_TtP3VFX10VFXBinding_> _binding;
    VFXCoreEntityHandle *_handle;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long objectID;
@property (readonly, copy, nonatomic) NSString *objectName;
@property (readonly, copy, nonatomic) NSString *bindingName;
@property (readonly, copy, nonatomic) NSString *userManual;
@property (readonly, copy, nonatomic) NSString *enumName;
@property (readonly, copy, nonatomic) NSArray *enumCases;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long semantic;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (copy, nonatomic) NSData *rawValue;
@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id description;
@property (readonly, nonatomic) long long componentCount;
@property (readonly, nonatomic) unsigned long long componentSize;
@property (readonly, nonatomic) NSString *documentation;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ range;
@property (readonly, nonatomic) long long bindingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

@end
