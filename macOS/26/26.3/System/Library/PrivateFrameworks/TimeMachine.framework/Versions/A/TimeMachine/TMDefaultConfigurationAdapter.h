@class NSString, TMConfiguration;

@interface TMDefaultConfigurationAdapter : NSObject <TMConfigurationAdapter>

@property (readonly) TMConfiguration *configuration;
@property (readonly) long long restrictedSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;

@end
