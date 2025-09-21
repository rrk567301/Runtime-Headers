@class NSString, NSArray, ASDPlugin, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ASDPropertyChangedDelegate;

@interface ASDObject : NSObject {
    NSMutableArray *_customProperties;
    NSObject<OS_dispatch_queue> *_customPropertyQueue;
    unsigned long long _stateDumpHandler;
}

@property (nonatomic) unsigned int objectID;
@property (weak, nonatomic) ASDObject *owner;
@property (weak, nonatomic) ASDPlugin *plugin;
@property (weak, nonatomic) id<ASDPropertyChangedDelegate> propertyChangedDelegate;
@property (readonly, nonatomic) unsigned int baseClass;
@property (readonly, nonatomic) unsigned int objectClass;
@property (readonly, weak, nonatomic) NSString *driverClassName;
@property (readonly, nonatomic) NSArray *customProperties;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)objectClass;
- (char)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (char)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (id)initWithPlugin:(id)a0;
- (unsigned int)baseClass;
- (char)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (void)addCustomProperty:(id)a0;
- (int)addPassthroughPropertyWithUnderlyingObject:(id)a0 andPropertyAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a1;
- (id)customPropertyWithAddress:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (char)isKindOfAudioClass:(unsigned int)a0;
- (unsigned int)minDataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (void)removeCustomProperty:(id)a0;
- (char)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;
- (void)setupDiagnosticStateDumpHandlerWithTreeWalk:(char)a0;

@end
