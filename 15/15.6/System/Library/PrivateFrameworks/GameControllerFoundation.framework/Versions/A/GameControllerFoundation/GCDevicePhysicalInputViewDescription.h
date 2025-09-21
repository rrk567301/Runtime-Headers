@class NSMutableDictionary;

@interface GCDevicePhysicalInputViewDescription : NSObject {
    NSMutableDictionary *_additionalConfiguration;
}

- (id)init;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (char)validate:(out id *)a0;

@end
