@class NSMutableDictionary;

@interface GCDevicePhysicalInputViewDescription : NSObject {
    NSMutableDictionary *_additionalConfiguration;
}

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)validate:(out id *)a0;

@end
