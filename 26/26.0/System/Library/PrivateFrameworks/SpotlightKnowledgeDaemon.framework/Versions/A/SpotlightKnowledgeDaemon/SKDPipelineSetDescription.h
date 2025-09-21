@class NSString, NSNumber, NSArray;

@interface SKDPipelineSetDescription : NSObject {
    NSString *_name;
    NSNumber *_version;
    NSArray *_requiredBundles;
    NSArray *_excludedBundles;
    NSArray *_requiredProtectionClasses;
    NSArray *_excludedProtectionClasses;
    NSArray *_requiredAttributes;
    NSArray *_excludedAttributes;
    NSArray *_processedAttributes;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSArray *requiredBundles;
@property (copy, nonatomic) NSArray *excludedBundles;
@property (copy, nonatomic) NSArray *requiredProtectionClasses;
@property (copy, nonatomic) NSArray *excludedProtectionClasses;
@property (copy, nonatomic) NSArray *requiredAttributes;
@property (copy, nonatomic) NSArray *excludedAttributes;
@property (copy, nonatomic) NSArray *processedAttributes;
@property (nonatomic) BOOL enabled;

- (id)initWithName:(id)a0 version:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
