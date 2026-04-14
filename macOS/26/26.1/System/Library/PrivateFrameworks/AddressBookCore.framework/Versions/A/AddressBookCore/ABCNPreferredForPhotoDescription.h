@class NSString;

@interface ABCNPreferredForPhotoDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)init;
- (void)copyFromContact:(id)a0 to:(id)a1;
- (BOOL)shouldSkip;

@end
