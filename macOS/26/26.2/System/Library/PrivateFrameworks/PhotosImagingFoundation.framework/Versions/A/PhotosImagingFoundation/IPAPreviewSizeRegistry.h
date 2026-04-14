@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)addPolicy:(id)a0;
- (id)initWithName:(id)a0;
- (id)init;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
