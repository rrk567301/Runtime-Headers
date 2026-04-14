@class NSSet, NSString;

@interface EMFocus : NSObject <EFPubliclyDescribable>

@property (readonly, copy, nonatomic) NSSet *focusedAccountIdentifiers;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFocusedAccountIdentifiers:(id)a0;
- (BOOL)isFocusedIdentifier:(id)a0;

@end
