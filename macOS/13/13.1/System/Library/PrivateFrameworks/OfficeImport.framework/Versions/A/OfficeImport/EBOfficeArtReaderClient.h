@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (void)readClientDataFromShape:(id)a0 toGraphic:(id)a1 state:(id)a2;
+ (void)readClientDataFromGroup:(id)a0 toGroup:(id)a1 state:(id)a2;
+ (void)readClientDataFromTableCell:(id)a0 toTableCell:(id)a1 state:(id)a2;
+ (BOOL)escherIsFullySupported;
+ (BOOL)tablesAreAllowed;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)a0 state:(id)a1;
+ (id)readDrawableFromPackagePart:(id)a0 foundInObject:(id)a1 state:(id)a2;
+ (void)setAutoInsetForShape:(void *)a0;
+ (void)readEshClientAnchor:(const void *)a0 targetClientData:(id)a1 state:(id)a2;

@end
