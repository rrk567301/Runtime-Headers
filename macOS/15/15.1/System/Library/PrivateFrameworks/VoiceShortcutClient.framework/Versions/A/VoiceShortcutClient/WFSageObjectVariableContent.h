@class NSData, NSString, NSObject;
@protocol NSSecureCoding;

@interface WFSageObjectVariableContent : NSObject <WFSageVariableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *archivedContent;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *content;
@property (readonly, copy, nonatomic) NSString *contentClassName;
@property (readonly, copy, nonatomic) NSString *frameworkPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 archivedContent:(id)a1 contentClassName:(id)a2 frameworkPath:(id)a3;
- (id)initWithName:(id)a0 content:(id)a1 contentClassName:(id)a2;
- (id)initWithName:(id)a0 content:(id)a1 contentClassName:(id)a2 frameworkPath:(id)a3;
- (BOOL)loadContentByTrustingThePayload:(BOOL)a0 error:(id *)a1;

@end
