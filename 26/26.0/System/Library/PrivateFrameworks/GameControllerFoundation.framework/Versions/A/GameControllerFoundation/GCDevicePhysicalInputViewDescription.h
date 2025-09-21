@class NSMutableDictionary;

@interface GCDevicePhysicalInputViewDescription : NSObject {
    NSMutableDictionary *_additionalConfiguration;
}

- (id)init;
- (BOOL)validate:(out id *)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void).cxx_destruct;

@end
