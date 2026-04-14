@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)addPolicy:(id)a0;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
