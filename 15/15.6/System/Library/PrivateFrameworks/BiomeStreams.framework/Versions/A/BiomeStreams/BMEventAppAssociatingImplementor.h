@class NSString;

@interface BMEventAppAssociatingImplementor : BMEventBase <BMEventAppAssociating>

@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isCompleteWithContext:(id)a0 error:(id *)a1;
- (char)isValidWithContext:(id)a0 error:(id *)a1;

@end
