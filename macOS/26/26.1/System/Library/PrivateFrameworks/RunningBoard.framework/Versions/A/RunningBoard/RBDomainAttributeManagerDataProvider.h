@class NSString, NSDictionary;

@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding> {
    NSString *_path;
    NSDictionary *_rawTemplates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)validationErrors;
- (id)templatesByDomain;
- (id)validDomains;

@end
