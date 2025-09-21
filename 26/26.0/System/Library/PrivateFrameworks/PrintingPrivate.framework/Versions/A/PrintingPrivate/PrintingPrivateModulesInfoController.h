@class NSTextField, NSString, NSDictionary, NSOutlineView;

@interface PrintingPrivateModulesInfoController : NSWindowController <NSOutlineViewDelegate, NSOutlineViewDataSource>

@property NSTextField *alertTitleTextField;
@property NSTextField *alertMessageTextField;
@property NSOutlineView *modulesOutlineView;
@property (retain) NSDictionary *modulesDict;
@property (retain) NSString *title;
@property (retain) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modulesByIdentifier:(id)a0;
+ (id)modulesInfoControllerUsingModules:(id)a0 title:(id)a1 message:(id)a2;
+ (id)modulesInforForPrinter:(struct OpaquePMPrinter { } *)a0;
+ (id)shouldShowModulesInfoForBrowser:(id)a0 forPrinter:(id)a1 usingPPD:(struct ppd_file_s { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char *x10; int x11; struct ppd_emul_s *x12; char *x13; char *x14; char *x15; char *x16; char *x17; char *x18; char *x19; char *x20; char *x21; char *x22; char *x23; int x24; struct ppd_group_s *x25; int x26; struct ppd_size_s *x27; float x28[2]; float x29[2]; float x30[4]; int x31; struct ppd_const_s *x32; int x33; char **x34; int x35; struct ppd_profile_s *x36; int x37; char **x38; int x39; char *x40; char *x41; int x42; int x43; struct ppd_attr_s **x44; struct _cups_array_s *x45; struct _cups_array_s *x46; struct _cups_array_s *x47; struct _cups_array_s *x48; struct _cups_array_s *x49; struct _ppd_cache_s *x50; } *)a2 title:(id *)a3 message:(id *)a4 description:(id *)a5;
+ (id)shouldShowModulesInfoForPPD:(struct ppd_file_s { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char *x10; int x11; struct ppd_emul_s *x12; char *x13; char *x14; char *x15; char *x16; char *x17; char *x18; char *x19; char *x20; char *x21; char *x22; char *x23; int x24; struct ppd_group_s *x25; int x26; struct ppd_size_s *x27; float x28[2]; float x29[2]; float x30[4]; int x31; struct ppd_const_s *x32; int x33; char **x34; int x35; struct ppd_profile_s *x36; int x37; char **x38; int x39; char *x40; char *x41; int x42; int x43; struct ppd_attr_s **x44; struct _cups_array_s *x45; struct _cups_array_s *x46; struct _cups_array_s *x47; struct _cups_array_s *x48; struct _cups_array_s *x49; struct _ppd_cache_s *x50; } *)a0;
+ (id)valuesForAttribute:(const char *)a0 inPDD:(struct ppd_file_s { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char *x10; int x11; struct ppd_emul_s *x12; char *x13; char *x14; char *x15; char *x16; char *x17; char *x18; char *x19; char *x20; char *x21; char *x22; char *x23; int x24; struct ppd_group_s *x25; int x26; struct ppd_size_s *x27; float x28[2]; float x29[2]; float x30[4]; int x31; struct ppd_const_s *x32; int x33; char **x34; int x35; struct ppd_profile_s *x36; int x37; char **x38; int x39; char *x40; char *x41; int x42; int x43; struct ppd_attr_s **x44; struct _cups_array_s *x45; struct _cups_array_s *x46; struct _cups_array_s *x47; struct _cups_array_s *x48; struct _cups_array_s *x49; struct _ppd_cache_s *x50; } *)a1;

- (void)windowDidLoad;
- (void)dealloc;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)GotoPrintingHelp:(id)a0;
- (void)handleOKButton:(id)a0;

@end
