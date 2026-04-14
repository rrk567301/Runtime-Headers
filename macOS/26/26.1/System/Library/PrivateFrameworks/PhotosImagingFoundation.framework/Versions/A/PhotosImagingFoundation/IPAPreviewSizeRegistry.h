@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (void)addPolicy:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
