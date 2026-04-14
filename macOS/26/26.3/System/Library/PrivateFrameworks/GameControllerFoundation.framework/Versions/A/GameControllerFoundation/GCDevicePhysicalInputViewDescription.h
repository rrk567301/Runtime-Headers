@class NSMutableDictionary;

@interface GCDevicePhysicalInputViewDescription : NSObject {
    NSMutableDictionary *_additionalConfiguration;
}

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validate:(out id *)a0;

@end
