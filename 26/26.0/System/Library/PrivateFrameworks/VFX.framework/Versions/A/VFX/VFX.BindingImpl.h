@class NSString, NSArray, NSData;

@interface VFX.BindingImpl : _TtCs12_SwiftObject <VFX.VFXBinding> {
    void /* unknown type, empty encoding */ entityManager;
    void /* function */ identifier;
    void /* function */ objectName;
    void /* function */ bindingName;
    void /* function */ userManual;
    void /* function */ enumName;
    void /* function */ enumCases;
    void /* unknown type, empty encoding */ property;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long objectID;
@property (nonatomic, copy) NSString *objectName;
@property (nonatomic, copy) NSString *bindingName;
@property (nonatomic, copy) NSString *userManual;
@property (nonatomic) long long type;
@property (nonatomic) long long semantic;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) BOOL isPublic;
@property (nonatomic, copy) NSString *enumName;
@property (nonatomic, copy) NSArray *enumCases;
@property (nonatomic, copy) NSData *rawValue;

@end
