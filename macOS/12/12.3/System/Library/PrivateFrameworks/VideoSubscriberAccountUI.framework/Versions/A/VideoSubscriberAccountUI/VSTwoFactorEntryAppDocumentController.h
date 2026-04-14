@class NSString, NSMutableArray;

@interface VSTwoFactorEntryAppDocumentController : VSAppDocumentController <VSTwoFactorEntryViewModelDelegate>

@property (retain, nonatomic) NSMutableArray *buttonElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)twoFactorEntryViewModel:(id)a0 didPressButtonAtIndex:(unsigned long long)a1;

@end
