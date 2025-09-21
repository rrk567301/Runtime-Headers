@class NSUUID, NSString, NSURL, NSDictionary;

@interface MCMContainer : NSObject {
    NSString *_identifier;
    NSUUID *_uuid;
    NSString *_personaUniqueString;
    long long _containerClass;
    struct container_object_s { } *_thisContainer;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) struct container_object_s { } *thisContainer;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) long long containerClass;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic, getter=isTemporary) char temporary;

+ (id)containerWithIdentifier:(id)a0 createIfNecessary:(char)a1 existed:(char *)a2 error:(id *)a3;
+ (id)containerWithIdentifier:(id)a0 error:(id *)a1;
+ (id)temporaryContainerWithIdentifier:(id)a0 existed:(char *)a1 error:(id *)a2;
+ (long long)typeContainerClass;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)uuid;
- (char)isEqualToContainer:(id)a0;
- (void)_errorOccurred;
- (void)markDeleted;
- (char)_obj1:(id)a0 isEqualToObj2:(id)a1;
- (id)infoValueForKey:(id)a0 error:(id *)a1;
- (char)recreateDefaultStructureWithError:(id *)a0;
- (char)regenerateDirectoryUUIDWithError:(id *)a0;
- (char)setInfoValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)destroyContainerWithCompletion:(id /* block */)a0;
- (unsigned long long)diskUsageWithError:(id *)a0;
- (struct container_object_s { } *)getLowLevelContainerObject;
- (id)initWithIdentifier:(id)a0 createIfNecessary:(char)a1 existed:(char *)a2 temp:(char)a3 error:(id *)a4;
- (id)initWithIdentifier:(id)a0 path:(id)a1 uniquePathComponent:(id)a2 uuid:(id)a3 personaUniqueString:(id)a4 uid:(unsigned int)a5 error:(id *)a6;

@end
