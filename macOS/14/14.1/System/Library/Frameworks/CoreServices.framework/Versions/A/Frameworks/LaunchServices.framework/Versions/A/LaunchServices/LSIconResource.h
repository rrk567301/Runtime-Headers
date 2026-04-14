@class NSURL, NSData, NSString;

@interface LSIconResource : NSObject <LSIconResource>

@property (retain) NSURL *resourceURL;
@property (retain) NSData *resourceData;
@property (retain) NSString *resourceRelativePath;
@property (retain) NSString *resourceFileName;
@property (retain) NSString *resourceName;
@property (getter=isDocumentBadge) BOOL documentBadge;
@property (retain) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_resourceWithVolumeURL:(id)a0 context:(struct LSContext { id x0; } *)a1;
+ (id)resourceForURL:(id)a0;
+ (BOOL)_isNetBoot;
+ (id)_kextInfoURLResourcePropertyKeys;
+ (id)_resourceForKextBundleIdentifier:(id)a0 iconName:(id)a1;
+ (id)_resourceForType:(id)a0;
+ (id)_resourceForURL:(id)a0;
+ (id)_resourceWithContentsOfURL:(id)a0;
+ (id)_resourceWithType:(id)a0 context:(struct LSContext { id x0; } *)a1;
+ (id)_resourceWithURL:(id)a0 context:(struct LSContext { id x0; } *)a1;
+ (id)_volumeURLResourcePropertyKeys;
+ (id)resourceForKextBundleIdentifier:(id)a0 iconName:(id)a1;
+ (id)resourceForType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateFromType:(id)a0 binding:(struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; } *)a1 context:(struct LSContext { id x0; } *)a2;
- (void)updateFromBundle:(unsigned int)a0 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned char x19; unsigned char x20; unsigned int x21; unsigned short x22; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x23; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; } x14; unsigned int x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; unsigned int x20; struct LSVersionNumber { unsigned char x0[32]; } x21; struct LSVersionNumber { unsigned char x0[32]; } x22; int x23; struct LSVersionNumber { unsigned char x0[32]; } x24; unsigned long long x25; unsigned long long x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned long long x37; unsigned int x38; unsigned long long x39; unsigned long long x40; unsigned long long x41; unsigned int x42; unsigned long long x43; unsigned long long x44; unsigned int x45; unsigned int x46; unsigned long long x47; unsigned int x48; unsigned long long x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; unsigned int x57; unsigned int x58; unsigned int x59; unsigned int x60; unsigned int x61; unsigned int x62; unsigned int x63; unsigned int x64; unsigned int x65; unsigned char x66; unsigned char x67; unsigned char x68; unsigned int x69; unsigned int x70[0]; unsigned int x71; unsigned int x72; int x73; unsigned int x74; unsigned int x75; unsigned int x76; unsigned int x77; unsigned int x78; } *)a1 context:(struct LSContext { id x0; } *)a2;
- (void)updateFromUTType:(id)a0;

@end
