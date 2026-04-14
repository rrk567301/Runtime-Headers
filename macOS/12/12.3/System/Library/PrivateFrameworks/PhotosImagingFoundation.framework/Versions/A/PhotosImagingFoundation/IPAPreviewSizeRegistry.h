@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (id)description;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)addPolicy:(id)a0;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
